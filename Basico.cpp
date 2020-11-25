///////////////////////////////
///FEITO POR GUILHERME ROSSI///
///////////////////////////////

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include "cabe.hpp"
#include "blocos.hpp"

using namespace std;


///----------------------------------------------VARIÁVEIS GLOBAIS-------------------------------------------------------
int global_laranja, global_laranja2, global_laranja3, global_laranja4, global_laranja5;
int global_verde, global_verde2, global_verde3, global_verde4, global_verde5;
int global_branco, global_branco2, global_branco3, global_branco4, global_branco5;
int global_roxo, global_roxo2, global_roxo3;
int global_cinza, global_cinza2;
int global_azul;
int global_dourado, global_dourado2, global_dourado3;
int Vidas::n=0;
int musica_aux =0;
int sample_aux =0;
int num_blocos = 24;
//variaveis globais jogador
float xj, yj, dxj;

//variaveis globais bola
//float xb, yb, dxb, dyb;

///______________________________________________________________________________________________________________
ALLEGRO_BITMAP *fundo;
ALLEGRO_BITMAP *gameover;
ALLEGRO_BITMAP *victory;
ALLEGRO_FONT *font;
ALLEGRO_FONT *nomejogador;
ALLEGRO_FONT *pontuacao;
ALLEGRO_SAMPLE *som=NULL;
ALLEGRO_SAMPLE *sample=NULL;
ALLEGRO_AUDIO_STREAM *musica=NULL;
ALLEGRO_TIMER *timer = NULL;

bool comSom = 1;
bool comMusica = 0;

int teclas[5] = { 0, 0, 0, 0, 0};


enum TECLAS
{
    KEY_A, KEY_D, KEY_W, KEY_S, KEY_P
};
///----------------------------------- Prototipos--------------------------------------------------------
void verificaAtualizaJogador(Jogador *gamer, Bola *ball, float atualizaValorX);
float sign(float x);
void fazPausa();

///________________________________________________________________________________________________

void gameOver_vic::gameOver()
{
    al_clear_to_color(al_map_rgb(0,0,0));
    al_draw_bitmap(gameover, 0, 0, 0);
}

void gameOver_vic::gameOver2()
{
    al_clear_to_color(al_map_rgb(0,0,0));
    al_draw_bitmap(victory, 0, 0, 0);
}

void Score::printaPonto()
{
    if (num_blocos == 24)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 24");
    if (num_blocos == 23)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 23");
    if (num_blocos == 22)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 22");
    if (num_blocos == 21)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 21");
    if (num_blocos == 20)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 20");
    if (num_blocos == 19)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 19");
    if (num_blocos == 18)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 18");
    if (num_blocos == 17)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 17");
    if (num_blocos == 16)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 16");
    if (num_blocos == 15)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 15");
    if (num_blocos == 14)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 14");
    if (num_blocos == 13)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 13");
    if (num_blocos == 12)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 12");
    if (num_blocos == 11)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 11");
    if (num_blocos == 10)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 10");
    if (num_blocos == 9)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 9");
    if (num_blocos == 8)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 8");
    if (num_blocos == 7)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 7");
    if (num_blocos == 6)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 6");
    if (num_blocos == 5)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 5");
    if (num_blocos == 4)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 4");
    if (num_blocos == 3)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 3");
    if (num_blocos == 2)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 2");
    if (num_blocos == 1)
        al_draw_text (pontuacao, al_map_rgb(255, 255, 255), 200, 535, ALLEGRO_ALIGN_LEFT, "BLOCOS RESTANTES: 1");
}

void Score::fezPonto()
{
    num_blocos = num_blocos - 1;
}

void NomeJogador::escreveNome()
{
    cout <<"Quantas letras tem seu primeiro nome?:\n";
    cin >> tamanho;
    vect = new char [tamanho];
    cout <<"Qual seu primeiro nome?:\n";
    cin >> vect;
}

void checa (Sample &s, Musica &p)
{
    if (s.funcionando_sample == 1)
    {
        printf ("SAMPLE FUNCIONANDO\n");
    }
    else
        printf ("SAMPLE NAO FUNCIONANDO\n");

    if (p.funcionando_musica)
    {
        printf ("MUSICA FUNCIONANDO\n");
    }
    else
        printf ("MUSICA NAO FUNCIONANDO\n");
}

Score::Score()
{
    x = 0;
    y = 0;
}

Score::Score(int x1, int y1)
{
    x = x1;
    y = y1;
}

void Score::printa ()
{
    cout << "" << x << y << endl;
}

Score Score::operator+(Score s)
{
    Score aux;

    aux.x = x + s.x;
    aux.y = y + s.y;
    return aux;
}

void Sample::tocaSample(ALLEGRO_SAMPLE *som)
{
    al_play_sample(som, 1.0, 0.0,1.0,ALLEGRO_PLAYMODE_ONCE,NULL);
}

void Tela::imprimeTela()
{
    al_clear_to_color(al_map_rgb(0,0,0));
    al_draw_bitmap(fundo, 0, 0, 0);
}

void Teclado::verificaTeclado(ALLEGRO_EVENT *ev)
{
    if(ev->type == ALLEGRO_EVENT_KEY_DOWN)
    {
        switch(ev->keyboard.keycode)
        {
        case ALLEGRO_KEY_A:
            teclas[KEY_A] = 1;
            break;

        case ALLEGRO_KEY_D:
            teclas[KEY_D] = 1;
            break;

        case ALLEGRO_KEY_W:
            teclas[KEY_W] = 1;
            break;

        case ALLEGRO_KEY_S:
            teclas[KEY_S] = 1;
            break;
        case ALLEGRO_KEY_P:
            teclas[KEY_P] = 1;
            //exemplo de pausa
            fazPausa();
            break;
        }
    }
    else if(ev->type == ALLEGRO_EVENT_KEY_UP)
    {
        switch(ev->keyboard.keycode)
        {
        case ALLEGRO_KEY_A:
            teclas[KEY_A] = 0;
            break;

        case ALLEGRO_KEY_D:
            teclas[KEY_D] = 0;
            break;

        case ALLEGRO_KEY_W:
            teclas[KEY_W] = 0;
            break;

        case ALLEGRO_KEY_S:
            teclas[KEY_S] = 0;
            break;
        case ALLEGRO_KEY_P:
            teclas[KEY_P] = 0;
            break;
        }
    }
}

void Jogador::criaJogador()
{
    bmp1 = al_create_bitmap(larguraj, alturaj);
    if(!bmp1)
    {
        cout << "failed to create jogador bitmap!\n";
        al_destroy_display(display);
        al_destroy_timer(timer);
        //qual o problema desta função?
        return;
    }
    //Pintando o BMP com uma determinada cor
    al_set_target_bitmap(bmp1);
    al_clear_to_color(al_map_rgb(255, 0, 0));

}

void Bola::criaBola(ALLEGRO_DISPLAY *display)
{
    bmp2 = al_load_bitmap("bola.png");
    if(!bmp2)
    {
        cout << "failed to create bola bitmap!\n";
        al_destroy_display(display);
        al_destroy_timer(timer);
        return;
    }
}

Imprime::~Imprime() {}

void Bola::imprimeBola()
{
    al_draw_bitmap(bmp2, xb, yb, 0);
}

void Jogador::imprimeJogador()
{
    al_draw_bitmap(bmp1, xj, yj, 0);
}

void Tela::criarDisplay()
{
    display = al_create_display(SCREEN_W, SCREEN_H);
    if(!display)
    {
        cout << "failed to create display!\n";
        al_destroy_timer(timer);
        return;
    }
}
void Variaveis::metodo() { cout << "Metodo..." << endl; }
void Play::Var(Bola *ball, Jogador *gamer)
{
    gamer->xj = 350.0;
    gamer->yj = 510.0;
    gamer->dxj = 0;
}

///______________________________________________________________________________________________________________________________

///--------------------------------------------------------FUNÇÕES---------------------------------------------------------------
void Bola::reiniciaBola()
{
    int xRand = 1 + ((rand() % 2)*(-2));
    int yRand = 1 + ((rand() % 2)*(-2));
    //jogamos a bola para o meio
    xb = (float)(SCREEN_W / 2.0 - DiamB / 2.0);
    yb = (float)(SCREEN_H / 2.0 - DiamB / 2.0);
    dxb = 2 * xRand;
    dyb = 2 * yRand;
}
void fazPausa()
{

    al_clear_to_color(al_map_rgb(0,0,0));
    char texto[50];
    sprintf(texto,"Pausa %d", 0);
    al_draw_text(font, al_map_rgb(255,255,255), (SCREEN_W/2), (SCREEN_H/2),ALLEGRO_ALIGN_CENTRE, texto);
    al_flip_display();
    //tocamos um som
    if(comSom)
        al_play_sample(som, 1.0, 0.0,1.0,ALLEGRO_PLAYMODE_ONCE,NULL);
    //Precisamos parar o timer, caso contrário os eventos ficarão enfileirados para serem tratados
    al_stop_timer(timer);
    al_rest(2.0);
    al_start_timer(timer);
}

void Teclado::processaTeclado(Jogador *gamer, Bola *ball)///DEFINE O QUANTO O JOGADOR VAI MOVER E CHAMA UMA
                                                                ///FUNÇÃO PARA ATUALIZAR POSIÇÃO DO JOGADOR
{
    if(teclas[KEY_A] && gamer->xj >= 4)
    {
        gamer->dxj = -4.0/2;
        verificaAtualizaJogador(gamer, ball, -4);
    }
    else if(teclas[KEY_D] && (gamer->xj <= (SCREEN_W-larguraj-4)))
    {
        gamer->dxj = 4.0/2;
        verificaAtualizaJogador(gamer, ball, 4);
    }
    else
        gamer->dxj = 0;
}

float sign(float x)///SIMPLES FUNÇÃO USADA EM int Processa::executaTarefas(Bola *ball, Jogador *gamer);
{
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}
void verificaAtualizaJogador(Jogador *gamer, Bola *ball, float atualizaValorX)///CONTRIBUI EM NÃO DEIXAR A BOLA ENTRAR NO JOGADOR
{
   float novaPosJogadorX = gamer->xj + atualizaValorX;

    ///Detecta se ao atualizar o jogador ocorrerá uma colisão, se sim, inverte o movimento X da bola
    if((ball->yb + DiamB > gamer->yj &&
       ball->yb < gamer->yj + alturaj) &&
    ((ball->xb + DiamB > novaPosJogadorX &&
       ball->xb < novaPosJogadorX + larguraj))) return;

    gamer->xj += atualizaValorX;
}

int Processa::executaTarefas(Bola *ball, Jogador *gamer)///CONTRIBUI PARA VERIFICAR A EXISTÊNCIA DE COLISÃO
{
    int aux = 0;
    //se tocou no topo ou na parte de baixo da tela
    if(ball->yb >= SCREEN_H-DiamB)
    {
        aux = 1;
        return aux;
    }
    else if((ball->xb < 0) || (ball->xb +DiamB > SCREEN_W)) {
        ball->dxb *= -1;
        ball->xb += ball->dxb;
        ball->yb += ball->dyb;
        return aux;
    }

    else if((ball->yb) < 0){
        ball->dyb *= -1;
        ball->xb += ball->dxb;
        ball->yb += ball->dyb;
        return aux;
    }
    else
    {
        if((ball->yb+DiamB+ball->dyb > gamer->yj) && (ball->yb+ball->dyb < gamer->yj+alturaj) &&

        ((ball->xb+ball->dxb+DiamB == gamer->xj) || (ball->xb + ball->dxb == gamer->xj+larguraj))){

            ball->dxb *= -1;
        }

        else if(((ball->yb + DiamB + ball->dyb > gamer->yj) &&
        (ball->yb + ball->dyb < gamer->yj + alturaj)) &&

        ((ball->xb + DiamB + ball->dxb > gamer->xj) &&
        (ball->xb + ball->dxb < gamer->xj + larguraj+ gamer->dxj)))
        {
            //se a bola já estava do lado da jogador

            //invertemos o X
            ball->dyb = -sign(ball->dyb)*(1.9 + (rand()%2));
            if(sign(gamer->dxj) != 0){
                ball->dxb = abs(ball->dxb)*sign(gamer->dxj);
            }
            return aux;
        }

    ball->xb += ball->dxb;
    ball->yb += ball->dyb;
    }

    return aux;
}
///______________________________________________________________________________________________________________________________

///-------------------------------------------------------------PRINCIPAL--------------------------------------------------------
int main(int argc, char **argv)
{
    srand((unsigned)time(NULL));
    Vidas v1, v2;
    NomeJogador nomej;
    const int CCOUNT = 8;
    char c[CCOUNT] = "BLOCOS:";
    Score score;
    gameOver_vic over_vic;

    global_laranja = 0;
    global_laranja2 = 0;
    global_laranja3 = 0;
    global_laranja4 = 0;
    global_laranja5 = 0;

    global_dourado = 0;
    global_dourado2 = 0;
    global_dourado3 = 0;

    global_azul = 0;

    global_branco = 0;
    global_branco2 = 0;
    global_branco3 = 0;
    global_branco4 = 0;
    global_branco5 = 0;

    global_verde = 0;
    global_verde2 = 0;
    global_verde3 = 0;
    global_verde4 = 0;
    global_verde5 = 0;

    global_cinza = 0;
    global_cinza2 = 0;

    global_roxo = 0;
    global_roxo2 = 0;
    global_roxo3 = 0;

    Tela tela;
    Sample sample;
    sample.funcionando_sample=0;

    Musica musica;
    musica.funcionando_musica=0;

    Score ss = Score(1, 2), sss = Score(1, 2);
    Score s = ss + sss;
    score.printaVetor(c, CCOUNT);
    s.printa();

    Jogador jogador;
    Play inicia;
    Teclado teclado;
    Bola bola;
    BlocoGeral geral;
    Processa processo;

    BlocoAzul azul;
    BlocoLaranja laranja;
    BlocoLaranja2 laranja2;
    BlocoLaranja3 laranja3;
    BlocoLaranja4 laranja4;
    BlocoLaranja5 laranja5;

    BlocoBranco branco;
    BlocoBranco2 branco2;
    BlocoBranco3 branco3;
    BlocoBranco4 branco4;
    BlocoBranco5 branco5;

    BlocoVerde verde;
    BlocoVerde2 verde2;
    BlocoVerde3 verde3;
    BlocoVerde4 verde4;
    BlocoVerde5 verde5;

    BlocoRoxo roxo;
    BlocoRoxo2 roxo2;
    BlocoRoxo3 roxo3;

    BlocoDourado dourado;
    BlocoDourado2 dourado2;
    BlocoDourado3 dourado3;

    BlocoCinza cinza;
    BlocoCinza2 cinza2;

    ALLEGRO_EVENT_QUEUE *event_queue = NULL;

    nomej.escreveNome();
    inicia.Var(&bola, &jogador);
    bola.reiniciaBola();

    bool redraw = true;

    if(!al_init())
    {
        cout << "failed to initialize allegro!\n";
        return -1;
    }

    if(!al_install_keyboard())
    {
        cout << "failed to initialize the keyboard!\n";
        return -1;
    }
    al_init_font_addon(); // initialize the font addon
    al_init_ttf_addon();// initialize the ttf (1 Type Font) addon

    if(!al_init_image_addon())
    {
        cout << "failed to initialize the al_init_image_addon!\n";
        return -1;
    }

    if(!al_install_audio())
    {
        comSom = 0;
        cout << "failed to initialize audio!\n" ;
        //return -1;
    }

    if(comSom && !al_init_acodec_addon())
    {
        cout << "failed to initialize audio codecs!\n";
        return -1;
    }
    //Reserves a number of sample instances, and creates a default mixer if one doesn't exist. This allows us to decide how many audio samples we will be creating for now we are only creating one.
    if (comSom && !al_reserve_samples(1))
    {
        cout << "failed to reserve samples!\n";
        return -1;
    }

    if(comSom == 1)
    {
        //carregamos o som
        sample.funcionando_sample = 1;
//        birr.funcionando_sample = 1;
  //      parab.funcionando_sample = 1;
        som = al_load_sample("batida.wav");

        if (!som)
        {
            cout << "Audio clip som not loaded!\n";
            return -1;
        }
    }

    // Torna apto o uso de mouse na aplicação
    if (!al_install_mouse())
    {
        al_destroy_display(tela.display);
        al_destroy_timer(timer);
        cout << "Falha ao inicializar o mouse.\n";
        return -1;
    }

    tela.criarDisplay();
    jogador.criaJogador();
    bola.criaBola(tela.display);
    azul.criaBloco();

    laranja.criaBlocoLaranja();
    laranja2.criaBlocoLaranja2();
    laranja3.criaBlocoLaranja3();
    laranja4.criaBlocoLaranja4();
    laranja5.criaBlocoLaranja5();

    branco.criaBlocoBranco();
    branco2.criaBlocoBranco2();
    branco3.criaBlocoBranco3();
    branco4.criaBlocoBranco4();
    branco5.criaBlocoBranco5();

    verde.criaBlocoVerde();
    verde2.criaBlocoVerde2();
    verde3.criaBlocoVerde3();
    verde4.criaBlocoVerde4();
    verde5.criaBlocoVerde5();

    roxo.criaBlocoRoxo();
    roxo2.criaBlocoRoxo2();
    roxo3.criaBlocoRoxo3();

    dourado.criaBlocoDourado();
    dourado2.criaBlocoDourado2();
    dourado3.criaBlocoDourado3();

    cinza.criaBlocoCinza();
    cinza2.criaBlocoCinza2();

    // Atribui o cursor padrão do sistema para ser usado
    if (!al_set_system_mouse_cursor(tela.display, ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT))
    {
        al_destroy_display(tela.display);
        al_destroy_timer(timer);
        cout << "Falha ao atribuir ponteiro do mouse.\n";
        return -1;
    }

    font = al_load_ttf_font("pirulen.ttf",12,0 );
    nomejogador = al_load_ttf_font("pirulen.ttf",21,0 );
    pontuacao = al_load_ttf_font("pirulen.ttf",21,0 );

    if (!font)
    {
        printf("Could not load 'pirulen.ttf'.\n");
        return -1;
    }

    timer = al_create_timer(1.0 / FPS);
    if(!timer)
    {
        cout << "failed to create timer!\n";
        return -1;
    }

    fundo = al_load_bitmap("fundo.png");
    gameover = al_load_bitmap ("gameover.png");
    victory = al_load_bitmap ("victory.png");

    if(!fundo)
    {
        printf("failed to create  bitmap!\n");
        return -1;
    }

    event_queue = al_create_event_queue();
    if(!event_queue)
    {
        cout << "failed to create event_queue!\n";
        al_destroy_display(tela.display);
        al_destroy_timer(timer);
        return -1;
    }


    al_register_event_source(event_queue, al_get_display_event_source(tela.display));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_mouse_event_source());

    al_set_target_bitmap(al_get_backbuffer(tela.display));
    al_clear_to_color(al_map_rgb(0,0,0));
    al_flip_display();

    al_start_timer(timer);

    checa (sample, musica); ///FRIEND
    while(1)
    {
        ALLEGRO_EVENT ev;
        al_wait_for_event(event_queue, &ev);
        redraw = true;

        if(ev.type == ALLEGRO_EVENT_TIMER)
        {
            teclado.processaTeclado(&jogador, &bola);
            if(processo.executaTarefas(&bola, &jogador))
            {
                v1.perdeVida(v1.n); ///STATIC
                if (v1.n == 1){

                    over_vic.gameOver();
                    al_flip_display();
                    Sleep(2000);
                    break;

                }
            }
            if (global_laranja == 0)
            {
                if (processo.verificaBatidaLaranja(&bola, &laranja))
                {
                    score.fezPonto();
                    global_laranja = 1;
                    sample.tocaSample(som);
                }
            }
            if (global_laranja2 == 0)
            {
                if (processo.verificaBatidaLaranja2(&bola, &laranja2) != 0)
                {
                    score.fezPonto();
                    global_laranja2 = 1;
                    sample.tocaSample(som);
                }
            }
            if (global_laranja3 == 0)
            {
                if (processo.verificaBatidaLaranja3(&bola, &laranja3) != 0)
                {
                    score.fezPonto();
                    global_laranja3 = 1;
                    sample.tocaSample(som);
                }
            }
            if (global_laranja4 == 0)
            {
                if (processo.verificaBatidaLaranja(&bola, &laranja4) != 0)
                {
                    score.fezPonto();
                    global_laranja4 = 1;
                    sample.tocaSample(som);
                }
            }
            if (global_laranja5 == 0)
            {
                if (processo.verificaBatidaLaranja(&bola, &laranja5) != 0)
                {
                    score.fezPonto();
                    global_laranja5 = 1;
                    sample.tocaSample(som);
                }
            }
            if (global_cinza2 == 0)
            {
                if (processo.verificaBatidaCinza2(&bola, &cinza2) != 0)
                {
                score.fezPonto();
                global_cinza2 = 1;
                sample.tocaSample(som);
                }
            }
            if ((global_dourado == 0))
            {
                if (processo.verificaBatidaDourado (&bola, &dourado) != 0)
                {
                score.fezPonto();
                global_dourado = 1;
                sample.tocaSample(som);
                }
            }
            if (global_cinza == 0)
            {
                if (processo.verificaBatidaCinza(&bola, &cinza) != 0)
                {
                score.fezPonto();
                global_cinza = 1;
                sample.tocaSample(som);
                }
            }
            if (global_roxo3 == 0)
            {
                if (processo.verificaBatidaRoxo3(&bola, &roxo3) != 0)
                {
                score.fezPonto();
                global_roxo3 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_roxo == 0)
            {
                if (processo.verificaBatidaRoxo(&bola, &roxo) != 0)
                {
                score.fezPonto();
                global_roxo = 1;
                sample.tocaSample(som);
                }
            }
            if (global_roxo2 == 0)
            {
                if (processo.verificaBatidaRoxo2(&bola, &roxo2) != 0)
                {
                score.fezPonto();
                global_roxo2 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_dourado3 == 0)
            {
                if (processo.verificaBatidaDourado3 (&bola, &dourado3) != 0)
                {
                score.fezPonto();
                global_dourado3 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_dourado2 == 0)
            {
                if (processo.verificaBatidaDourado2 (&bola, &dourado2) != 0)
                {
                score.fezPonto();
                global_dourado2 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_verde == 0)
            {
                if (processo.verificaBatidaVerde (&bola, &verde) != 0)
                {
                score.fezPonto();
                global_verde = 1;
                sample.tocaSample(som);
                }
            }
            if (global_verde2 == 0)
            {
                if (processo.verificaBatidaVerde2 (&bola, &verde2) != 0)
                {
                score.fezPonto();
                global_verde2 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_verde3 == 0)
            {
                if (processo.verificaBatidaVerde3 (&bola, &verde3) != 0)
                {
                score.fezPonto();
                global_verde3 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_verde4 == 0)
            {
                if (processo.verificaBatidaVerde4 (&bola, &verde4) != 0)
                {
                score.fezPonto();
                global_verde4 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_verde5 == 0)
            {
                if (processo.verificaBatidaVerde5 (&bola, &verde5) != 0)
                {
                score.fezPonto();
                global_verde5 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_branco == 0)
            {
                if (processo.verificaBatidaBranco (&bola, &branco) != 0)
                {
                score.fezPonto();
                global_branco = 1;
                sample.tocaSample(som);
                }
            }
            if (global_branco2 == 0)
            {
                if (processo.verificaBatidaBranco2 (&bola, &branco2) != 0)
                {
                score.fezPonto();
                global_branco2 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_branco3 == 0)
            {
                if (processo.verificaBatidaBranco3 (&bola, &branco3) != 0)
                {
                score.fezPonto();
                global_branco3 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_branco4 == 0)
            {
                if (processo.verificaBatidaBranco4 (&bola, &branco4) != 0)
                {
                score.fezPonto();
                global_branco4 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_branco5 == 0)
            {
                if (processo.verificaBatidaBranco5 (&bola, &branco5) != 0)
                {
                score.fezPonto();
                global_branco5 = 1;
                sample.tocaSample(som);
                }
            }
            if (global_azul == 0)
            {
                if (processo.verificaBatidaAzul (&bola, &geral) != 0)
                {
                score.fezPonto();
                global_azul = 1;
                sample.tocaSample(som);
                }
            }
        }
        //se estiver na hora (x) de fechar a aplicação
        else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            break;
        }
        else if((ev.type == ALLEGRO_EVENT_KEY_DOWN) || (ev.type == ALLEGRO_EVENT_KEY_UP))
        {
            teclado.verificaTeclado(&ev);
        }

        if(redraw && al_is_event_queue_empty(event_queue))
        {
            redraw = false;

            tela.imprimeTela();
            jogador.imprimeJogador();
            bola.imprimeBola();

            if (global_azul == 0)
                azul.imprimeBloco(azul.get_xba(), azul.get_yba());

            if (global_laranja == 0)
                laranja.imprimeBlocoLaranja(laranja.xbl, laranja.ybl);
            if (global_laranja2 == 0)
                laranja2.imprimeBlocoLaranja2(laranja2.xbl, laranja2.ybl);
            if (global_laranja3 == 0)
                laranja3.imprimeBlocoLaranja3(laranja3.xbl, laranja3.ybl);
            if (global_laranja4 == 0)
                laranja4.imprimeBlocoLaranja4(laranja4.xbl, laranja4.ybl);
            if (global_laranja5 == 0)
                laranja5.imprimeBlocoLaranja5(laranja5.xbl, laranja5.ybl);

            if (global_branco == 0)
                branco.imprimeBlocoBranco(branco.xbl, branco.ybl);
            if (global_branco2 == 0)
                branco2.imprimeBlocoBranco2(branco2.xbl, branco2.ybl);
            if (global_branco3 == 0)
                branco3.imprimeBlocoBranco3(branco3.xbl, branco3.ybl);
            if (global_branco4 == 0)
                branco4.imprimeBlocoBranco4(branco4.xbl, branco4.ybl);
            if (global_branco5 == 0)
                branco5.imprimeBlocoBranco5(branco5.xbl, branco5.ybl);

            if (global_verde == 0)
                verde.imprimeBlocoVerde(verde.xbl, verde.ybl);
            if (global_verde2 == 0)
                verde2.imprimeBlocoVerde2(verde2.xbl, verde2.ybl);
            if (global_verde3 == 0)
                verde3.imprimeBlocoVerde3(verde3.xbl, verde3.ybl);
            if (global_verde4 == 0)
                verde4.imprimeBlocoVerde4(verde4.xbl, verde4.ybl);
            if (global_verde5 == 0)
                verde5.imprimeBlocoVerde5(verde5.xbl, verde5.ybl);

            if (global_roxo == 0)
                roxo.imprimeBlocoRoxo(roxo.xbl, roxo.ybl);
            if (global_roxo2 == 0)
                roxo2.imprimeBlocoRoxo2(roxo2.xbl, roxo2.ybl);
            if (global_roxo3 == 0)
                roxo3.imprimeBlocoRoxo3(roxo3.xbl, roxo3.ybl);

            if (global_dourado == 0)
                dourado.imprimeBlocoDourado(dourado.xbl, dourado.ybl);
            if (global_dourado2 == 0)
                dourado2.imprimeBlocoDourado2(dourado2.xbl, dourado2.ybl);
            if (global_dourado3 == 0)
                dourado3.imprimeBlocoDourado3(dourado3.xbl, dourado3.ybl);

            if (global_cinza == 0)
                cinza.imprimeBlocoCinza(cinza.xbl, cinza.ybl);
            if (global_cinza2 == 0)
                cinza2.imprimeBlocoCinza2(cinza2.xbl, cinza2.ybl);

            al_draw_text (nomejogador, al_map_rgb(255, 255, 255), 30, 535, NULL, nomej.vect); ///ALOCACAO
            score.printaPonto();

            if (num_blocos == 0)
            {
                over_vic.gameOver2();
                al_flip_display();
                Sleep(3000);
                break;
            }
            al_flip_display();

        }
    }

    al_destroy_font(font);
    al_destroy_font(nomejogador);
    al_destroy_font(pontuacao);
    al_destroy_bitmap(fundo);
    al_destroy_bitmap(gameover);
    al_destroy_bitmap(victory);
    al_destroy_bitmap(jogador.bmp1);
    al_destroy_bitmap(bola.bmp2);
    al_destroy_timer(timer);
    al_destroy_display(tela.display);
    al_destroy_event_queue(event_queue);
    if(comSom){
        al_destroy_sample(som);
    }

    return 0;
}
///______________________________________________________________________________________________________________________________
