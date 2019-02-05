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
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;              /* нижняя граница температур в таблице */
    upper = 300;            /* верхняя граница */
    step  = 20;             /* величина шага */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}
