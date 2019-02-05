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

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;              /* нижняя граница температур в таблице */
    upper = 300;            /* верхняя граница */
    step  = 20;             /* величина шага */
    printf("Фаренгейт - Цельсий\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0) ;
        printf("%6.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}
