/*
 * MIT License
 *
 * Copyright (c) 2026 kujo-ren
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <stdio.h>

int add_bonus(int score) {
    //箱を先に作っておく
    score = score + 10;
    return score;
}

int main(void){
    //変数種類
    int my_score = 80;
    double average = 75.5;
    char rank = 'B';

    //関数に値のコピーを渡し結果を受け取る
    my_score = add_bonus(my_score);

    //結果の表示
    printf("点数: %d\n" ,my_score); //90点
    printf("平均: %.1f点\n", average); //75.5点
    printf("評価: %c\n", rank); //B

    return 0;
}
