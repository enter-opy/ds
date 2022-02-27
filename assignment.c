int hash_function(int);

struct hash_map {
    int data;
    struct hash_map *next;
};


int main(void) {
    int arr[] = {73, 37, 84, 48, 12, 59};


}

int hash(int k) {
    return k % 7;
}