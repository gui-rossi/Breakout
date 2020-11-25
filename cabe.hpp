#ifndef CABE_HPP_INCLUDED
#define CABE_HPP_INCLUDED

class gameOver;
class Musica;
class Imprime;

class Tela
{
public:
    ALLEGRO_DISPLAY *display;

    void imprimeTela();
    void criarDisplay();
};

class Jogador : public Tela
{
public:
    ALLEGRO_BITMAP *bmp1;
    float xj, yj;
    float dxj;

    void imprimeJogador();
    void criaJogador();
};

class Imprime  ///Interface
{
public:
    virtual void imprimeBola() = 0;
    virtual ~Imprime();
};

class Bola : public Imprime ///Parte da Interface
{
public:
    ALLEGRO_BITMAP *bmp2;
    float xb, yb;
    float dxb, dyb;

    void imprimeBola();
    void criaBola(ALLEGRO_DISPLAY *display);
    void MovimentaBola();
    void reiniciaBola();

    void printa()
    {
        printf("xb: %.2f\tyb: %.2f\tdxb: %.2f\tdyb: %.2f\n", xb, yb, dxb, dyb);
    }
};

class Variaveis  ///Classe Abstrata
{
public:
    virtual void Var(Bola *ball, Jogador *gamer) = 0; ///Método virtual
    void metodo();
};

class Play : public Variaveis
{
public:
    void Var(Bola *ball, Jogador *gamer);
};

class Teclado
{
public:

    void processaTeclado(Jogador *gamer, Bola *ball);
    void verificaTeclado(ALLEGRO_EVENT *ev);
};

class BlocoGeral
{
public:
    ALLEGRO_BITMAP *geral;
    float aux_xa;
    float aux_ya;

    BlocoGeral()
    {
        aux_xa = 50;
        aux_ya = 25;
    }
    void imprimeBloco (float xbloco, float ybloco);
    void criaBloco ();
};

class BlocoAzul : public BlocoGeral
{
private:
    float xbap;
    float ybap;

public:

    float get_xba()
    {
        return xbap;
    }
    float get_yba()
    {
        return ybap;
    }

    BlocoAzul()
    {
        xbap = 50;
        ybap = 25;
    }
};

class BlocoLaranja
{
public:
    ALLEGRO_BITMAP *laranja1;

    int aux;
    float xbl;
    float ybl;

    BlocoLaranja()
    {
        aux = 0;
        xbl = 138;
        ybl = 25;
    }

    void criaBlocoLaranja ();
    void imprimeBlocoLaranja (float xbl, float ybl);
};

class BlocoLaranja2 : public BlocoLaranja
{
public:
    ALLEGRO_BITMAP *laranja2;
    int xbl;
    int ybl;

    BlocoLaranja2()
    {
        xbl = 138+264;
        ybl = 25;
    }

    void criaBlocoLaranja2 ();
    void imprimeBlocoLaranja2 (float xbl, float ybl);
};

class BlocoLaranja3 : public BlocoLaranja
{
public:
    ALLEGRO_BITMAP *laranja3;

    BlocoLaranja3()
    {
        xbl = 138+528;
        ybl = 25;
    }

    void criaBlocoLaranja3 ();
    void imprimeBlocoLaranja3 (float xbl, float ybl);
};

class BlocoLaranja4 : public BlocoLaranja
{
public:
    ALLEGRO_BITMAP *laranja4;

    BlocoLaranja4()
    {
        xbl = 138-120;
        ybl = 55;
    }

    void criaBlocoLaranja4 ();
    void imprimeBlocoLaranja4 (float xbl, float ybl);
};

class BlocoLaranja5 : public BlocoLaranja
{
public:
    ALLEGRO_BITMAP *laranja5;

    BlocoLaranja5()
    {
        xbl = 138-120+264;
        ybl = 55;
    }

    void criaBlocoLaranja5 ();
    void imprimeBlocoLaranja5 (float xbl, float ybl);
};


class BlocoBranco
{
public:
    ALLEGRO_BITMAP *branco1;

    float xbl;
    float ybl;

    BlocoBranco()
    {
        xbl = 226;
        ybl = 25;
    }

    void criaBlocoBranco ();
    void imprimeBlocoBranco (float xbl, float ybl);
};

class BlocoBranco2 : public BlocoBranco
{
public:
    ALLEGRO_BITMAP *branco2;

    BlocoBranco2()
    {
        xbl = 226+264;
        ybl = 25;
    }

    void criaBlocoBranco2 ();
    void imprimeBlocoBranco2 (float xbl, float ybl);
};

class BlocoBranco3 : public BlocoBranco
{
public:
    ALLEGRO_BITMAP *branco3;

    BlocoBranco3()
    {
        xbl = 226-120;
        ybl = 25+30;
    }

    void criaBlocoBranco3 ();
    void imprimeBlocoBranco3 (float xbl, float ybl);
};

class BlocoBranco4 : public BlocoBranco
{
public:
    ALLEGRO_BITMAP *branco4;

    BlocoBranco4()
    {
        xbl = 226-120+264;
        ybl = 25+30;
    }

    void criaBlocoBranco4 ();
    void imprimeBlocoBranco4 (float xbl, float ybl);
};

class BlocoBranco5 : public BlocoBranco
{
public:
    ALLEGRO_BITMAP *branco5;

    BlocoBranco5()
    {
        xbl = 226-120+264+88+88;
        ybl = 25+30;
    }

    void criaBlocoBranco5 ();
    void imprimeBlocoBranco5 (float xbl, float ybl);
};


class BlocoVerde
{
public:
    ALLEGRO_BITMAP *verde1;

    float xbl;
    float ybl;

    BlocoVerde()
    {
        xbl = 314;
        ybl = 25;
    }

    void criaBlocoVerde ();
    void imprimeBlocoVerde (float xbl, float ybl);
};

class BlocoVerde2 : public BlocoVerde
{
public:
    ALLEGRO_BITMAP *verde2;

    BlocoVerde2()
    {
        xbl = 314+264;
        ybl = 25;
    }

    void criaBlocoVerde2 ();
    void imprimeBlocoVerde2 (float xbl, float ybl);
};

class BlocoVerde3 : public BlocoVerde
{
public:
    ALLEGRO_BITMAP *verde3;

    BlocoVerde3()
    {
        xbl = 314-120;
        ybl = 25+30;
    }

    void criaBlocoVerde3 ();
    void imprimeBlocoVerde3 (float xbl, float ybl);
};

class BlocoVerde4 : public BlocoVerde
{
public:
    ALLEGRO_BITMAP *verde4;

    BlocoVerde4()
    {
        xbl = 314-120+264;
        ybl = 25+30;
    }

    void criaBlocoVerde4 ();
    void imprimeBlocoVerde4 (float xbl, float ybl);
};

class BlocoVerde5 : public BlocoVerde
{
public:
    ALLEGRO_BITMAP *verde5;

    BlocoVerde5()
    {
        xbl = 314-120+264+88+88;
        ybl = 25+30;
    }

    void criaBlocoVerde5 ();
    void imprimeBlocoVerde5 (float xbl, float ybl);
};


class BlocoRoxo
{
public:
    ALLEGRO_BITMAP *roxo1;

    float xbl;
    float ybl;

    BlocoRoxo()
    {
        xbl = 50;
        ybl = 85;
    }

    void criaBlocoRoxo ();
    void imprimeBlocoRoxo (float xbl, float ybl);
};

class BlocoRoxo2 : public BlocoRoxo
{
public:
    ALLEGRO_BITMAP *roxo2;

    BlocoRoxo2()
    {
        xbl = 50+264;
        ybl = 85;
    }

    void criaBlocoRoxo2 ();
    void imprimeBlocoRoxo2 (float xbl, float ybl);
};

class BlocoRoxo3 : public BlocoRoxo
{
public:
    ALLEGRO_BITMAP *roxo3;

    BlocoRoxo3()
    {
        xbl = 50+264+264;
        ybl = 85;
    }

    void criaBlocoRoxo3 ();
    void imprimeBlocoRoxo3 (float xbl, float ybl);
};


class BlocoDourado
{
public:
    ALLEGRO_BITMAP *dourado1;

    float xbl;
    float ybl;

    BlocoDourado()
    {
        xbl = 138;
        ybl = 85;
    }

    void criaBlocoDourado();
    void imprimeBlocoDourado (float xbl, float ybl);
};

class BlocoDourado2 : public BlocoDourado
{
public:
    ALLEGRO_BITMAP *dourado2;

    BlocoDourado2()
    {
        xbl = 138+264;
        ybl = 85;
    }

    void criaBlocoDourado2();
    void imprimeBlocoDourado2 (float xbl, float ybl);
};

class BlocoDourado3 : public BlocoDourado
{
public:
    ALLEGRO_BITMAP *dourado3;

    BlocoDourado3()
    {
        xbl = 138+264+264;
        ybl = 85;
    }

    void criaBlocoDourado3();
    void imprimeBlocoDourado3 (float xbl, float ybl);
};


class BlocoCinza
{
public:
    ALLEGRO_BITMAP *cinza1;

    float xbl;
    float ybl;

    BlocoCinza()
    {
        xbl = 226;
        ybl = 85;
    }

    void criaBlocoCinza();
    void imprimeBlocoCinza (float xbl, float ybl);
};

class BlocoCinza2 : public BlocoCinza
{
public:
    ALLEGRO_BITMAP *cinza2;

    float xbl;
    float ybl;

    BlocoCinza2()
    {
        xbl = 226+264;
        ybl = 85;
    }

    void criaBlocoCinza2();
    void imprimeBlocoCinza2 (float xbl, float ybl);
};

class Processa
{
public:
    gameOver *var;

    int executaTarefas(Bola *ball, Jogador *gamer);

    int verificaBatida(Bola *ball, Jogador *gamer);

    int verificaBatidaAzul (Bola *ball, BlocoGeral *geral);

    //bool verificaBatidaBloco (Bola *ball, Bloco *bk, int ybl, int xbl);

    int verificaBatidaLaranja (Bola *ball, BlocoLaranja *laranja);
    int verificaBatidaLaranja2 (Bola *ball, BlocoLaranja2 *laranja2);
    int verificaBatidaLaranja3 (Bola *ball, BlocoLaranja3 *laranja3);
    int verificaBatidaLaranja4 (Bola *ball, BlocoLaranja4 *laranja4);
    int verificaBatidaLaranja5 (Bola *ball, BlocoLaranja5 *laranja5);

    int verificaBatidaBranco (Bola *ball, BlocoBranco *branco);
    int verificaBatidaBranco2 (Bola *ball, BlocoBranco2 *branco2);
    int verificaBatidaBranco3 (Bola *ball, BlocoBranco3 *branco3);
    int verificaBatidaBranco4 (Bola *ball, BlocoBranco4 *branco4);
    int verificaBatidaBranco5 (Bola *ball, BlocoBranco5 *branco5);

    int verificaBatidaVerde (Bola *ball, BlocoVerde *verde);
    int verificaBatidaVerde2 (Bola *ball, BlocoVerde2 *verde2);
    int verificaBatidaVerde3 (Bola *ball, BlocoVerde3 *verde3);
    int verificaBatidaVerde4 (Bola *ball, BlocoVerde4 *verde4);
    int verificaBatidaVerde5 (Bola *ball, BlocoVerde5 *verde5);

    int verificaBatidaRoxo (Bola *ball, BlocoRoxo *roxo);
    int verificaBatidaRoxo2 (Bola *ball, BlocoRoxo2 *roxo2);
    int verificaBatidaRoxo3 (Bola *ball, BlocoRoxo3 *roxo3);

    int verificaBatidaDourado (Bola *ball, BlocoDourado *dourado);
    int verificaBatidaDourado2 (Bola *ball, BlocoDourado2 *dourado2);
    int verificaBatidaDourado3 (Bola *ball, BlocoDourado3 *dourado3);

    int verificaBatidaCinza (Bola *ball, BlocoCinza *cinza);
    int verificaBatidaCinza2 (Bola *ball, BlocoCinza2 *cinza2);

    void verificaTUDO ();
};

class gameOver_vic///ASSOCIACAO
{
public:
    Processa *var;

    void gameOver ();
    void gameOver2 ();
};

class Vidas ///STATIC
{
public:
    static int n;

    Vidas()
    {
        n = 1;
    }
    void static perdeVida (int n)
    {
        n--;
        printf ("VIDAS: %d\n", n);
    }
};

class Sample ///FRIEND
{
public:

    int funcionando_sample;

    void tocaSample (ALLEGRO_SAMPLE *som);
    friend void checa (Sample &s, Musica &p);
};

class Musica
{
public:

    int funcionando_musica;

    friend void checa (Sample &s, Musica &p);
};

class NomeJogador///ALOCACAO
{
public:
    int tamanho;
    char *vect;

    ~NomeJogador()
    {
        delete [] vect;
    }

    void escreveNome();
};

class Score
{
private:
    int x, y;

public:
    void fezPonto();
    void printaPonto();

    Score(); ///SOBRECARGA
    Score(int x1, int y1);

    template <typename T>
    void printaVetor (const T *array, int conta) ///TEMPLATE
    {
        for (int i=0; i<conta; i++)
            printf ("%c", array[i]);
    }

    void printa ();
    Score operator +(Score s); ///SOBRECARGA DE OPERADORES
};


#endif // CABE_HPP_INCLUDED
