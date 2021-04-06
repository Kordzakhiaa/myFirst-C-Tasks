#include <stdio.h>
// ვარჯიშის დაწყებისთანავე, პირველ დღეს მოთხილამურემ 10 კმ გაიარა. ყოველ მეორე
// დღეს მან გაზარდა გარბენი წინა დღის გარბენის 10% -ით. განსაზღვრეთ:
// ა) რომელ დღეს გაივლის 20 კმ-ზე მეტს;
// ბ) რომელ დღეს მთლიანი გარბენი ყველა დღის განმავლობაში გადააჭარბებს 100 კმ-ს.

int main(){
    int day_counter = 0;
    float kilometri = 10, sum_of_km = 0;

    while (kilometri <= 20)
    {
        kilometri += (float)kilometri / 100 * 10;
        sum_of_km += kilometri;
        day_counter++;
        if (sum_of_km > 100)
        {
            printf("ბ)In %d days km is more than 100 km\n", day_counter);
        }
    }
    printf("ა)In %d days km is more than 20 km\n", day_counter);
}
