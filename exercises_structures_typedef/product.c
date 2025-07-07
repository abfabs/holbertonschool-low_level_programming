#include "product.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Product create_product(const char* name, float price) {
    Product p;
    p.name = malloc(strlen(name) + 1);
    if (p.name) {
        strcpy(p.name, name);
    }
    p.price = price;
    return p;
}

void display_product(Product p) {
    printf("Product: %s | Price: $%.2f\n", p.name, p.price);
}

void display_all_products(Product* products, int count) {
    for (int i = 0; i < count; i++) {
        display_product(products[i]);
    }
}

float average_price(Product* products, int count) {
    float sum = 0.0f;
    for (int i = 0; i < count; i++) {
        sum += products[i].price;
    }
    return (count > 0) ? sum / count : 0.0f;
}

Product find_most_expensive(Product* products, int count) {
    Product max = products[0];
    for (int i = 1; i < count; i++) {
        if (products[i].price > max.price) {
            max = products[i];
        }
    }
    return max;
}

void free_product(Product* p) {
    free(p->name);
    p->name = NULL;
}