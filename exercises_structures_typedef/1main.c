#include <stdio.h>
#include "product.h"


int main() {
    Product products[] = {
        create_product("Apple", 1.25f),
        create_product("Milk", 2.50f),
        create_product("Bread", 1.75f),
        create_product("Cheese", 4.20f)
    };

    int count = sizeof(products) / sizeof(products[0]);

    printf("\nAll Products:\n");
    display_all_products(products, count);

    printf("\nAverage Price: $%.2f\n", average_price(products, count));

    Product expensive = find_most_expensive(products, count);
    printf("\nMost Expensive Product:\n");
    display_product(expensive);

    for (int i = 0; i < count; i++) {
        free_product(&products[i]);
    }

    return 0;
}
