#ifndef PRODUCT_H
#define PRODUCT_H

typedef struct {
    char* name;
    float price;
} Product;

Product create_product(const char* name, float price);
void display_product(Product p);
void display_all_products(Product* products, int count);
float average_price(Product* products, int count);
Product find_most_expensive(Product* products, int count);
void free_product(Product* p);

#endif
