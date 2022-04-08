/** *  \file array_list_int.h
  * 
 *  \Breve  Array dinâmico C de valores inteiros da biblioteca.  *
     * \autor: Ruan Franklin
      * \date: 02/02/2022  *
 */
#ifndef _ARRAY_LIST_INT_H_ 
#define _ARRAY_LIST_INT_H_
typedef struct array_list_int array_list_int;
/*** \brief Cria uma nova lista de números inteiros.* 
* \Retorna um ponteiro para uma nova lista de estrutura de inteiros.     */  
array_list_int * array_list_create(); 
/**
  * \brief  Obtem o valor armazenado no  index 'index'
  * 
    * \Parâmetro de  lista: Um ponteiro para a lista de estrutura
   * \Parâmetro index: Um inteiro com um índice onde obtem o elemento.

  * \Parâmetro erro: um  ponteiro para uma inteiro para o  erro, caso ocorra. 
  * \retorna o valor inteiro armazenado no índice 'index.'
 */
int array_list_get(array_list_int * list, int index, int *error);
/**   * \Acrescenta um novo elemento para o final da lista.		     * 
  * \Parâmetro list: Um ponteiro para a estrutura de lista
  * \parâmetro value: O valor a ser anexado para 'list'
  * \retorna unsigned int 
 */
unsigned int array_list_push_back(array_list_int * list, int i);
 /** \brief Remove o último elemento da  lista.			   * 

* \paramêtro list: Um ponteiro para a estrutura lista.
* \retorna unsigned int: O número total de elementos após a remoção do último.    */
unsigned int array_list_pop_back(array_list_int * list);
/**   * \Obtém o número total de valores armazenados na lista 'list'
      *  * \parâmetro list: Um ponteiro para a estrutura de lista.
 * \retorna unsigned int: O número total de elementos armazenados em 'list'.			   */

unsigned int array_list_size(array_list_int * list);
 /**   * \Obtém o índice do elemento  "element".
*   * \parâmetro list: Um ponteiro para a estrutura de lista. 
   * \Parâmetro index: Um  número inteiro com um índice onde obter o elemento.  * \parâmetro error: Um ponteiro para um inteiro para definir um erro se ocorrer. 
      * \parâmetro element: O número inteiro para pesquisar na lista.
  * \retorna inteiro:  O índice do elemento "element" se o elemento estiver no intervalo [0..tamanho−1].	* \Função de implementação completa. */
 int array_list_find(array_list_int * list, int element)
/*** \ Insere um valor inteiro 'value' no indíce 'index'. 'index' deve

 *    ser válido, entre 0 e 'array_list_size'. Se
*    'index' for igual a 'size' a  função tem o mesmo efeito de 'array_list_push_back()."  					       
* \parâmetro list:  Um ponteiro para a estrutura de lista.			
* \parâmetro index: O índice onde inserir o elemento. Deve estar no intervalo [0..tamanho]
  * \parâmetro value: O valor inteiro a ser inserido. 
  * \retorna unsigned int: O novo  tamanho da lista.
   * \Função de implementação completa..
   */
 unsigned int array_list_insert_at(array_list_int * list, int index, int value)   /**
* \brief Remover elemento em 'index' de 'list'. 'index' deve ser um índice válido entre 0 e "array_list_size" -1.
 ** \parâmetro list:  Um ponteiro para a lista de estrutura.
  * \parâmetro index: O índice onde inserir o elemento deve estar no intervalo[0..tamanho]	 
  * \retorna unsigned int: O novo tamanho da lista.* \Função de implementação completa  */
 unsigned int array_list_remove_from(array_list_int * list, int index);
/**  * \brief Calcula a quantidade total de espaço para  'list' * 
* \parâmetro list: A lista para obter capacidade.			
* \retorna unsigned int: A quantidade total de 'list' de fontes de espaço.			*/
unsigned int array_list_capacity(array_list_int * list);								  /**
  * \brief Verifique a ocupação de array_list_int 'list'.
* * \param list: A 'list' a ser verificada.
   * \retorna double: Um número entre 0.0 e 1.0, representando o 		    * O espaço total utilizado como uma porcentagem do espaço reservado.   */
double array_list_percent_occupied(array_list_int * list);		/**
* \brief Liberar o espaço total de memória reservado de "list".
\parâmetro list: A lista a ser lançada.		* \todo		     */
void array_list_destroy(array_list_int * list); 
#endif


