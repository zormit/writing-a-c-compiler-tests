int main() {
    int dim2[1][2] = {{1, 2}};
    int dim[2] = {3, 4};
    dim2[0] = dim;
    return dim[0];
}