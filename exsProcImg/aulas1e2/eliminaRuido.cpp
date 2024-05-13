/*
Renan Hideo Watanabe NUSP 4777842
Sophia Celine Rafael Alves Pereira NUSP 11803994
*/

#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

// ELIMINAÇÃO DO RUÍDO BRANCO
int elimina_ruibr() {
 Mat_<uchar> a=imread("mickeyruibr.bmp",0);
 Mat_<uchar> b(a.rows,a.cols);
 for (int l=0; l<a.rows-1; l++)
 for (int c=0; c<a.cols-1; c++)
 if (a(l,c)!=a(l,c+1) || a(l,c)!=a(l+1,c))
 b(l,c)=0;
 else
 b(l,c)=255;
 imwrite("borda.bmp",b);
}


// EX EXTRA 1 - ELIMINAÇÃO DE RUÍDO BRANCO E PRETO



// EX EXTRA 2
/*
colocar 4 pixels semente nas bordas e pintar o fundo de cinza - componentes são pretos e furos são brancos
Percorrer a imagem até encontrar um pixel preto e fazer o crescimento de semente nele até encontrar pixel branco

*/