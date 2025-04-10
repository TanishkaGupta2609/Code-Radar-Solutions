#include <stdio.h>
#include <string.h>

struct Subscription {
    char username[100];
    char subscription_type[20];
    float subscription_cost;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Subscription subscriptions[n];
    float total_basic = 0, total_standard = 0, total_premium = 0;
    int count_basic = 0, count_standard = 0, count_premium = 0;

    for (int i = 0; i < n; i++) {
        printf("%d", i + 1);
        scanf("%s", subscriptions[i].username);
       
        scanf("%s", subscriptions[i].subscription_type);
       
        scanf("%f", &subscriptions[i].subscription_cost);

        // Calculate revenue and count users based on subscription type
        if (strcmp(subscriptions[i].subscription_type, "Basic") == 0) {
            total_basic += subscriptions[i].subscription_cost;
            count_basic++;
        } else if (strcmp(subscriptions[i].subscription_type, "Standard") == 0) {
            total_standard += subscriptions[i].subscription_cost;
            count_standard++;
        } else if (strcmp(subscriptions[i].subscription_type, "Premium") == 0) {
            total_premium += subscriptions[i].subscription_cost;
            count_premium++;
        }
    }

    // Display results
    printf("Basic: $%.2f from %d users\n", total_basic, count_basic);
    printf("Standard: $%.2f from %d users\n", total_standard, count_standard);
    printf("Premium: $%.2f from %d users\n", total_premium, count_premium);

    return 0;
}
