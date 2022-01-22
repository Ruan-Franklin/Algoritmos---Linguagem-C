/* 3 passos para calcular a complexidade: 
 1- Levar em consideração apenas as repetições do código
 2- Verificar a complexidade das funções/métodos próprios da linguagem (se utilizado)
 3- Ignorar as constantes e utilizar o termo de maior grau */
bool exemplo 1(vector<int> v, int X){ 
  int tamanho=v.size();  /* o(1) */  /* tudo o que for constante ignora */
  for(int i=0 ; i<tamanho ; i++){ /* Esse for representa o(n), onde n é o tamanho do vector. */ /* a complexidade do código é o(n), ou seja, linear. */
    if(v[i] == X) return true;  /* o(1) */ /* tudo o que for constante ignora */
}
  return false; /* o(1) */   /*tudo o que for constante ignora */
  }

/* exemplo 2 */
bool exemplo2(vector<int> v){
  int tamanho=v.size(): /* o(1) */  /* ignora constante */
  for(int i=0;i<tamanho; i++){ /* o(n) */
    for(int j=0; i<tamanho; i++){ /* o(n) */  /* como temos um o(n) e dentro temos outro o(n), a gente multiplica os dois. */
      if(i != j && v[i] == v[j]) /* o(1) */   /* ignora constante */
       return true } /* o(1) */   /* ignora constante */ 
  }
  return false; /* o(1) */ /* ignora constante */

  /* cálculo da complexidade: o(n) * o(n) -----> o(n²) */



int exemplo3(vector<int>){
  int tamanho=v.size();
  int bla=0;
  for(int i=0; i<tamanho; i++){  /* o(n). n é o tamanho.*/
    for(int j=0 ; j<tamanho; j++){ /* o(n). n é o tamanho. */
      if(v[i] == v[j]){
	bla++;
      }
    }
  }
 /*  ... */
  int ble=0;
  for(int i=0 ; i<tamanho ; i++){ /* o(n). n é o tamanho. */
    if(v[i] == 10){
     ble = 2*ble 
    }
  }

  int bli=0;
  for(i=0; i<tamanho ; i++){ /* O(n)  n é o tamanho.*/
   if(v[i]==5){
	bli+=5;}
  return bla+ble+bli;
  }


  /* complexidade
 o(n) * o(n) >> o(n²) (caso de um for dentro do outro.)
o(n²) + o(n) +o(n)  
o(n²) +2*o(n)  coloca o 2 para simplificar
o(n²) + o(n)  usa a 3° regra, ou seja, ignora o 2.
O(n²)  usa a regra de utilizar o termo de maior grau.

A complexidade desse exemplo é de n² */ 


/* Exemplo 4 */
 bool exemplo4(vector<int> v, vector<int> w){
   int tamanho = v.size();
   int tamanho2 = w.size();
   for (int i=0; i<tamanho ; i++){ /*o(n)*/
     for(int j=0; j<tamanho2 ; j++){ /*o(m) variáveis diferentes recebem letras diferentes */
       if(v[i] == v[j]){
	 return true;
       }
     }
   }
   return false; 
     }

/* complexidade: o(n) * o(m)  já que os "for" estão ligados, multiplica. Temos um termo  */

 /* Exemplo 5: */
 bool exemplo5(vector <int> idades){
   int tamanho=idades.size();
   int menor_idade=200;
   for(int i=0; i<tamanho ; i++){ /* o(n) n é tamanho */
     if(idades[i] < menor_idade){
       menor_idade=idades[i];
     }
   }
   int cont = 0;
   for(int i=0 ; i<tamanho ; i++){ /* o(n) n é tamanho */
     if(v[i] == menor_idade){
       cont++;
     }
   }
   return cont>1;

   /* complexidade: temos o(n) + o(n), que dá 2o(n)
    Ignorando a constante (2) e utilizando o termo de maior grau, temos o(n). A complexidade desse código é de o (n)    */

   /* exemplo 6: */
   bool exemplo6(vector<int> idades){
   sort(idades.begin(),idades.end()) /* O(nlogn) */
   return idades [0] == idades [1];

  /* exemplo 7: */
   bool exemplo7(set<int> s, vector<int> v){
     int tamanho=v.size();
     for(int i=0; i<tamanho; i++){ /* o(n) n é tamanho */
	 if(s.count(v[i])) {  /* o(logN) */
	  return true;
     }
   }
    return false;
   }

   /* Complexidade: O(N) * O(logN)
    * Resultado: O(NLogN)


