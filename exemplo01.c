#include <stdio.h>
typedef long long ll;
typedef int i32;
typedef double nota;

i32 main(){
  ll matricula;
  nota nota01,nota02, media;
  printf("Digite a matrícula do aluno.\n");
  scanf("%lld",&matricula);
  printf("Agora digite as duas notas do aluno.");
  scanf("%lf %lf",&nota01,&nota02);
  media=(nota01*2+nota02*3)/5;
  printf("%lld: %.2lf, %.2lf = %.2lf\n",matricula,nota01,nota02,media);





  return 0;
}

