/*
E21) Faça um programa que leia 6 números que representem respectivamente os valores de
hora1, minuto1, segundo1, hora2, minuto2 e segundo2. O programa deve verificar as entradas para que hora
seja informada entre 0 e 23, minutos e segundos de 0 a 59. Por fim o programa deve mostrar a diferença
entre as duas entradas (a 2a menos a 1a) na forma de horas : minutos : segundos.
*/

#include <stdio.h>
int main() {
    int h1, h2, m1, m2, s1, s2, aux, rh, rm, rs;
    
    scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

    // validação de hora, minuto, segundo; 

    if ((h1 >= 0) && (h2 >= 0) && (h1 <= 23) && (h2 <= 23) &&
        (m1 >= 0) && (m2 >= 0) && (m1 <= 59) && (m2 <= 59) &&
        (s1 >= 0) && (s2 >= 0) && (s1 <= 59) && (s2 <= 59))
        {

        //horário maior sempre vai estar na var h2m2s2 para que seja feita a 2a menos a 1a; 

        if (h1 > h2) {
         aux = h2;
         h2 = h1; 
         h1 = aux;   

         aux = m2;
         m2 = m1; 
         m1 = aux;  

         aux = s2;
         s2 = s1; 
         s1 = aux;

        }   

        //condição para o cálculo de segundos e minutos;

        if (s2 < s1) {
            s2 = s2 + 60;
            m2 = m2 - 1;
        }

        if (m2 < m1) {
            m2 = m2 + 60;
            h2 = h2 - 1; 
        }

        //cálculo do resultado 

        rs = s2 - s1;
        rm = m2 - m1;
        rh = h2 - h1;

        printf("%d:%d:%d\n\n", rh, rm, rs);


} else { 

printf("Você não digitou as horas no formato correto.\n");

}

    return 0;
}