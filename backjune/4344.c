#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    bool o = true;
    while (o)
    {
        int c = 0;//예제개수
        scanf("%d", &c);

        for (int i = 0; i < c; i++)//예제 개수 만큼 돈다
        {
            int stu = 0;//학생의 수 검사 때마다 초기화
            int sum = 0;//학생들의 총점
            int pass = 0;//평균을 넘은 학생 수
            float result = 0;//최종 평균 넘은 학생의 %

            scanf("%d",&stu);//재정립
            int* n = (int*)malloc(sizeof(int) * stu);// 학생 수만큼 메모리 재할당

            for (int j = 0; j < stu; j++)//학생 수 만큼 돈다
            {
                scanf("%d", &n[j]);//학생들의 점수를 할당한다
                sum += n[j];//학생들의 점수를 하나하나 밀어넣는다.
            }

            sum = sum / stu;//학생 숫자만큼 총점을 나눈다.(평균)

            for (int k = 0; k < stu; k++)//학생 수 만큼 평균을 넘는 학생수를 찾는다.
            {
                if (n[k] > sum)
                {
                    pass++;
                }
            }

            result = ((float)pass*100) /(float)stu;
            printf("%.3f%%\n", result);
        }

        o = false;
    }

}
