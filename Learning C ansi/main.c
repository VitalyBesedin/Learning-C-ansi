//
//  main.c
//  Learning C ansi
//
//  Created by Vitaly Besedin on 05/02/2019.
//  Copyright © 2019 Vitaly Besedin. All rights reserved.
//

#include <stdio.h>

/* Вывод таблицы температур по Фаренгейту и Цельсию
 для farh = 0, 20, ..., 300 */


/*int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step  = 20;
    printf("Фаренгейт - Цельсий\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0) ;
        printf("%6.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}
*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20;              /* нижняя граница температур в таблице */
    upper = 150;            /* верхняя граница */
    step  = 10;             /* величина шага */
    printf("Цельсий - Фаренгейт\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0)  + 32.0 ;
        printf("%6.0f %10.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}
