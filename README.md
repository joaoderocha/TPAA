## TPAA
# Trabalho pratico da disciplica de PAA em 2019-1 UFOP

Apresenta uma solução para os problemas de:
 - maior conjunto independente
 - 3-SAT
 - Clique
 
 ---

Utiliza a técnica de branch and bound()

---

O algoritmo constroi a solucao em partes, define-se solução como dois conjuntos de vertices:
  - Conjunto A possui vertices nao visitados
  - Conjunto B possui vertices ja visitados
 
 ---
 
 O algoritmo itera sobre todas as possibilidades levando em consideracao duas funcoes:
  Função para saber se é promissor a solução atual - Observamos se o valor atribuido a solução parcial pior que a melhor solução ja encontrada. Se sim continuamos CC descartamos a solução .
  
---
  
  Função para saber se é válida a solução atual - A forma de iterar sobre as soluções fez a função de validade de solução ser nativa ao algoritmo. Iteramos e construimos soluções parciais apenas quando não existe repetição de vértice.

---

O algoritmo tambem mantém as soluções não avaliadas de acordo com uma função de ordenação o que permite ele sempre inicar a busca pelas soluções mais promissoras.
 
 ---
 
 Para resolver todos os problemas, o algoritmo precisa transformar um problema em outro.
 Este trabalho contempla as seguintes transformações:
 Conjunto Independente -> Clique Complexidade O(n)
 Conjunto Indepente -> Sat Complexidade O(n^2)
