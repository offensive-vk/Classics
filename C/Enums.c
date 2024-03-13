#include<stdio.h>
int main(void) {
    enum week { Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
    enum week a, b, c;
    enum week { Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } a, b, c;
    enum week { Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
    enum week a = Mon, b = Wed, c = Sat;
    // or
    enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } a = Mon, b = Wed, c = Sat;
    enum week {Mon = 1, Tues, Wed, Thurs} day;

    scanf("%d", &day);

    switch(day) {
    case Mon: puts("Monday"); break;
    case Tues: puts("Tuesday"); break;
    case Wed: puts("Wednesday"); break;
    case Thursday: puts("Thursday"); break;
    default: puts("Error!");
}

    return 0;
}