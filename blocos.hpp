#ifndef BLOCOS_HPP_INCLUDED
#define BLOCOS_HPP_INCLUDED

const float FPS = 100;
const int SCREEN_W = 800;
const int SCREEN_H = 600;
const int larguraj = 150;
const float alturaj = 25;
const int larguraBloco = 80;
const int alturaBloco = 25;
const int DiamB = 32;

int Colisao(float Ay, float Ax, float *Ady, float *Adx, float Diam, float By, float Bx, float Bcomp, float Balt);

void BlocoGeral::criaBloco ()
{
    geral = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(geral);
    al_clear_to_color(al_map_rgb(0, 0, 255));
}

void BlocoGeral::imprimeBloco(float xbloco, float ybloco)
{
    al_draw_bitmap(geral, xbloco, ybloco, 0);
}

///BLOCOS LARANJAS
void BlocoLaranja::criaBlocoLaranja()
{
    laranja1 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(laranja1);
    al_clear_to_color(al_map_rgb(255, 127, 0));
}

void BlocoLaranja2::criaBlocoLaranja2()
{
    laranja2 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(laranja2);
    al_clear_to_color(al_map_rgb(255, 127, 0));
}

void BlocoLaranja3::criaBlocoLaranja3()
{
    laranja3 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(laranja3);
    al_clear_to_color(al_map_rgb(255, 127, 0));
}

void BlocoLaranja4::criaBlocoLaranja4()
{
    laranja4 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(laranja4);
    al_clear_to_color(al_map_rgb(255, 127, 0));
}

void BlocoLaranja5::criaBlocoLaranja5()
{
    laranja5 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(laranja5);
    al_clear_to_color(al_map_rgb(255, 127, 0));
}

void BlocoLaranja::imprimeBlocoLaranja (float xbl, float ybl)
{
    al_draw_bitmap(laranja1, xbl, ybl, 0);
}

void BlocoLaranja2::imprimeBlocoLaranja2 (float xbl, float ybl)
{
    al_draw_bitmap(laranja2, xbl, ybl, 0);
}

void BlocoLaranja3::imprimeBlocoLaranja3 (float xbl, float ybl)
{
    al_draw_bitmap(laranja3, xbl, ybl, 0);
}

void BlocoLaranja4::imprimeBlocoLaranja4 (float xbl, float ybl)
{
    al_draw_bitmap(laranja4, xbl, ybl, 0);
}

void BlocoLaranja5::imprimeBlocoLaranja5 (float xbl, float ybl)
{
    al_draw_bitmap(laranja5, xbl, ybl, 0);
}

///BLOCOS BRANCOS
void BlocoBranco::criaBlocoBranco()
{
    branco1 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(branco1);
    al_clear_to_color(al_map_rgb(255, 255, 255));
}

void BlocoBranco2::criaBlocoBranco2()
{
    branco2 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(branco2);
    al_clear_to_color(al_map_rgb(255, 255, 255));
}

void BlocoBranco3::criaBlocoBranco3()
{
    branco3 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(branco3);
    al_clear_to_color(al_map_rgb(255, 255, 255));
}

void BlocoBranco4::criaBlocoBranco4()
{
    branco4 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(branco4);
    al_clear_to_color(al_map_rgb(255, 255, 255));
}

void BlocoBranco5::criaBlocoBranco5()
{
    branco5 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(branco5);
    al_clear_to_color(al_map_rgb(255, 255, 255));
}

void BlocoBranco::imprimeBlocoBranco (float xbb, float ybb)
{
    al_draw_bitmap(branco1, xbb, ybb, 0);
}

void BlocoBranco2::imprimeBlocoBranco2 (float xbb, float ybb)
{
    al_draw_bitmap(branco2, xbb, ybb, 0);
}

void BlocoBranco3::imprimeBlocoBranco3 (float xbb, float ybb)
{
    al_draw_bitmap(branco3, xbb, ybb, 0);
}

void BlocoBranco4::imprimeBlocoBranco4 (float xbb, float ybb)
{
    al_draw_bitmap(branco4, xbb, ybb, 0);
}

void BlocoBranco5::imprimeBlocoBranco5 (float xbb, float ybb)
{
    al_draw_bitmap(branco5, xbb, ybb, 0);
}

///BLOCOS VERDES
void BlocoVerde::criaBlocoVerde()
{
    verde1 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(verde1);
    al_clear_to_color(al_map_rgb(35, 142, 35));
}

void BlocoVerde2::criaBlocoVerde2()
{
    verde2 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(verde2);
    al_clear_to_color(al_map_rgb(35, 142, 35));
}

void BlocoVerde3::criaBlocoVerde3()
{
    verde3 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(verde3);
    al_clear_to_color(al_map_rgb(35, 142, 35));
}

void BlocoVerde4::criaBlocoVerde4()
{
    verde4 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(verde4);
    al_clear_to_color(al_map_rgb(35, 142, 35));
}

void BlocoVerde5::criaBlocoVerde5()
{
    verde5 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(verde5);
    al_clear_to_color(al_map_rgb(35, 142, 35));
}

void BlocoVerde::imprimeBlocoVerde (float xbv, float ybv)
{
    al_draw_bitmap(verde1, xbv, ybv, 0);
}

void BlocoVerde2::imprimeBlocoVerde2 (float xbv, float ybv)
{
    al_draw_bitmap(verde2, xbv, ybv, 0);
}

void BlocoVerde3::imprimeBlocoVerde3 (float xbv, float ybv)
{
    al_draw_bitmap(verde3, xbv, ybv, 0);
}

void BlocoVerde4::imprimeBlocoVerde4 (float xbv, float ybv)
{
    al_draw_bitmap(verde4, xbv, ybv, 0);
}

void BlocoVerde5::imprimeBlocoVerde5 (float xbv, float ybv)
{
    al_draw_bitmap(verde5, xbv, ybv, 0);
}


///BLOCOS ROXOS
void BlocoRoxo::criaBlocoRoxo()
{
    roxo1 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(roxo1);
    al_clear_to_color(al_map_rgb(139, 0, 139));
}

void BlocoRoxo2::criaBlocoRoxo2()
{
    roxo2 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(roxo2);
    al_clear_to_color(al_map_rgb(139, 0, 139));
}

void BlocoRoxo3::criaBlocoRoxo3()
{
    roxo3 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(roxo3);
    al_clear_to_color(al_map_rgb(139, 0, 139));
}

void BlocoRoxo::imprimeBlocoRoxo(float xbr, float ybr)
{
    al_draw_bitmap(roxo1, xbr, ybr, 0);
}

void BlocoRoxo2::imprimeBlocoRoxo2(float xbr, float ybr)
{
    al_draw_bitmap(roxo2, xbr, ybr, 0);
}

void BlocoRoxo3::imprimeBlocoRoxo3(float xbr, float ybr)
{
    al_draw_bitmap(roxo3, xbr, ybr, 0);
}


///BLOCOS DOURADOS
void BlocoDourado::criaBlocoDourado()
{
    dourado1 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(dourado1);
    al_clear_to_color(al_map_rgb(218, 165, 32));
}

void BlocoDourado2::criaBlocoDourado2()
{
    dourado2 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(dourado2);
    al_clear_to_color(al_map_rgb(218, 165, 32));
}

void BlocoDourado3::criaBlocoDourado3()
{
    dourado3 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(dourado3);
    al_clear_to_color(al_map_rgb(218, 165, 32));

}

void BlocoDourado::imprimeBlocoDourado(float xbd, float ybd)
{
    al_draw_bitmap(dourado1, xbd, ybd, 0);
}

void BlocoDourado2::imprimeBlocoDourado2(float xbd, float ybd)
{
    al_draw_bitmap(dourado2, xbd, ybd, 0);
}

void BlocoDourado3::imprimeBlocoDourado3(float xbd, float ybd)
{
    al_draw_bitmap(dourado3, xbd, ybd, 0);
}


///BLOCOS CINZAS
void BlocoCinza::criaBlocoCinza()
{
    cinza1 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(cinza1);
    al_clear_to_color(al_map_rgb(47, 79, 79));
}

void BlocoCinza2::criaBlocoCinza2()
{
    cinza2 = al_create_bitmap(larguraBloco, alturaBloco);
    al_set_target_bitmap(cinza2);
    al_clear_to_color(al_map_rgb(47, 79, 79));
}

void BlocoCinza::imprimeBlocoCinza(float xbc, float ybc)
{
    al_draw_bitmap(cinza1, xbc, ybc, 0);
}

void BlocoCinza2::imprimeBlocoCinza2(float xbc, float ybc)
{
    al_draw_bitmap(cinza2, xbc, ybc, 0);
}
int Colisao(float Ay, float Ax, float *Ady, float *Adx, float Diam, float By, float Bx, float Bcomp, float Balt)
{
    if(((Ay + Diam > By) && (Ay < By + Balt)) &&

            ((Ax + Diam == Bx) || (Ax == Bx + Bcomp)))
    {

        *Adx *= -1;
        return 1;
    }

    else if(((Ay + Diam + *Ady > By) &&
             (Ay + *Ady < By + Balt)) &&

            ((Ax + Diam + *Adx > Bx) &&
             (Ax + *Adx < Bx + Bcomp)))
    {

        *Ady *= -1;
        return 1;
    }

    return 0;//Se aux = 1, Houve colisão
}

///verifica LARANJA
int Processa::verificaBatidaLaranja (Bola *ball, BlocoLaranja *laranja)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, laranja->ybl, laranja->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaLaranja2 (Bola *ball, BlocoLaranja2 *laranja2)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, laranja2->ybl, laranja2->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaLaranja3 (Bola *ball, BlocoLaranja3 *laranja3)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, laranja3->ybl, laranja3->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaLaranja4 (Bola *ball, BlocoLaranja4 *laranja4)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, laranja4->ybl, laranja4->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaLaranja5 (Bola *ball, BlocoLaranja5 *laranja5)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, laranja5->ybl, laranja5->xbl, larguraBloco, alturaBloco));
}

///verifica BRANCO
int Processa::verificaBatidaBranco (Bola *ball, BlocoBranco *branco)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, branco->ybl, branco->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaBranco2 (Bola *ball, BlocoBranco2 *branco2)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, branco2->ybl, branco2->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaBranco3 (Bola *ball, BlocoBranco3 *branco3)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, branco3->ybl, branco3->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaBranco4 (Bola *ball, BlocoBranco4 *branco4)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, branco4->ybl, branco4->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaBranco5 (Bola *ball, BlocoBranco5 *branco5)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, branco5->ybl, branco5->xbl, larguraBloco, alturaBloco));
}

///verifica VERDE
int Processa::verificaBatidaVerde (Bola *ball, BlocoVerde *verde)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, verde->ybl, verde->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaVerde2 (Bola *ball, BlocoVerde2 *verde2)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, verde2->ybl, verde2->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaVerde3 (Bola *ball, BlocoVerde3 *verde3)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, verde3->ybl, verde3->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaVerde4 (Bola *ball, BlocoVerde4 *verde4)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, verde4->ybl, verde4->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaVerde5 (Bola *ball, BlocoVerde5 *verde5)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, verde5->ybl, verde5->xbl, larguraBloco, alturaBloco));
}

///verifica ROXO
int Processa::verificaBatidaRoxo (Bola *ball, BlocoRoxo *roxo)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, roxo->ybl, roxo->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaRoxo2 (Bola *ball, BlocoRoxo2 *roxo2)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, roxo2->ybl, roxo2->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaRoxo3 (Bola *ball, BlocoRoxo3 *roxo3)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, roxo3->ybl, roxo3->xbl, larguraBloco, alturaBloco));
}

///verifica DOURADO
int Processa::verificaBatidaDourado (Bola *ball, BlocoDourado *dourado)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, dourado->ybl, dourado->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaDourado2 (Bola *ball, BlocoDourado2 *dourado2)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, dourado2->ybl, dourado2->xbl, larguraBloco, alturaBloco));
}

int Processa::verificaBatidaDourado3 (Bola *ball, BlocoDourado3 *dourado3)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, dourado3->ybl, dourado3->xbl, larguraBloco, alturaBloco));
}

///verifica CINZA
int Processa::verificaBatidaCinza (Bola *ball, BlocoCinza *cinza)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, cinza->ybl, cinza->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaCinza2 (Bola *ball, BlocoCinza2 *cinza2)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, cinza2->ybl, cinza2->xbl, larguraBloco, alturaBloco));
}
int Processa::verificaBatidaAzul(Bola *ball, BlocoGeral *geral)
{
    return (Colisao(ball->yb, ball->xb, &ball->dyb, &ball->dxb, DiamB, geral->aux_ya, geral->aux_xa, larguraBloco, alturaBloco));
}
#endif // BLOCOS_HPP_INCLUDED
