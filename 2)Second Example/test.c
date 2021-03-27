#include <stdio.h>
// არითმეტიკის დავალების შესრულებისას ბუბას უნდა გადაემრავლებინა
// ორი ორნიშნა რიცხვი. მათი ჩანაწერი ციფრების მიხედვით იყო: xy და ac.
// ბუბას შეეშალა და ერთმანეთზე გადაამრავლა ორი რიცხვი ციფრებით: xc
// და ay. ცხადია მის მიერ მიღებული პასუხი არ დაემთხვა
// სახელმძღვანელოში მითითებულ პასუხს. დაწერეთ პროგრამა, რომელიც
// გამოთვლის რა პასუხი ეწერა სახელმძღვანელოში.

// შესატანი მონაცემები: ერთ სტრიქონში ორი ორნიშნა რიცხვი, რომელთა
// ჩანაწერი ციფრების მიხედვით წარმოადგენს xc და ay. არცერთი ციფრი 0
// არ არის.

// გამოსატანი მონაცემები: სახელმძღვანელოში მითითებული პასუხი.

// შესატანი მონაცემები
// 27 45

// გამოსატანი მონაცემები
// 1175

int main(){
    // xy ac
    // xc ay
    // 27 45
    // 25 47
    int m, n, x, y, a, c;
    m = 27;
    n = 45;
    
    x = m / 10; // [2]7 -> 2
    c = m % 10; // 2[7] -> 7
    a = n / 10; // [4]5 -> 4
    y = n % 10; // 4[5] -> 5

    printf("%d\n", ((x * 10 + y) * (a * 10 + c)));

    return 0;
}