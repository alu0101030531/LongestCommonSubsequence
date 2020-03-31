# Multiplicacion-De-Polinomios

### Creación de Vectores
---
*Se crearán dos vectores de forma aleatorio y se procederá a multiplicarlos mediante 2 algoritmos distintos con el fin de medir
el tiempo de ejecución con cada algoritmo*

### Algoritmo 1
---
Algoritmo clásico): \
Dados dos polinomiosp(x) y q(x) de grados N−1 cada uno de ellos (N coeficientes pi, qj), calcular el producto r(x) de acuerdo a la siguiente ecuación:\
**∑ 2n − 2; i = 0 * [∑ i; j = 0; pj * q(i−j)] xi**
### Algoritmo 2
---
Algoritmo Divide y Vencerás): \
Dados dos polinomios p(x)  y q(x)  de  grados N−1  cada  uno  de  ellos  (N coeficientes pi, qj),se propone implementar un procedimiento que utilice la técnica Divide y Vencerás dividiendo cada polinomio en dos polinomios con N/2 coeficientes cada uno.
Por ejemplo, para el polinomio p(x) = p0 + p1x + ··· + pN−1xN−1, dados dos polinomios p(x) y q(x) de grados N−1 cada uno de ellos 
(N coeficientes pi, qj), definimos: \
pl(x) = p0 + p1x + ··· + pN / (2−1)^(x^(N/2−1)) \
p(x) =pN2+pN2+1x+···+pN−1xN2−1dividiendoq(x) de la misma forma, tenemos:p(x) =pl(x) +xN2ph(x)q(x) =ql(x) +xN2qh(x)Ahora, en términos de polinomios m ́as peque ̃nos, el producto viene dadopor:p(x)q(x) =pl(x)ql(x) + (pl(x)qh(x) +ql(x)ph(x))xN2+ph(x)qh(x)xN.
En este caso habr ́ıamos pasado a tener que computar cuatro productos pa-ra obtener el producto de los polinomios de partida. Obs ́ervese que pararealizar el producto anterior son necesarios s ́olo tres productos de polino-mios manipulando la expresi ́on anterior del siguiente modo:rl(x) =pl(x)ql(x),rh(x) =ph(x)qh(x) yrm(x) = (pl(x) +ph(x))(ql(x) +qh(x)) puede obtenerse el productop(x)q(x) de la forma:p(x)q(x) =rl(x) + (rm(x)−rl(x)−rh(x))xN2+rh(x)xNEsta aproximaci ́on divide y vencer ́as computa una multiplicaci ́on de poli-nomios de tama ̃no N resolviendo tres subproblemas de tamaño N2, reali-zando adem ́as algunas sumas de polinomios para obtener la combinaci ́onde los productos.
