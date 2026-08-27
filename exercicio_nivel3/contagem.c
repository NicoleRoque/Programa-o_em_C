 int main()
        {
            int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            char* ptr = (char)nums; //diz que ptr + i é igual a ptr + 1
            int i, bytes;
            for(i=0, bytes=0; i<40; i++, bytes+=4)
                printf("%d: %p + %d bytes = %p ==> %d\n",
                    i, ptr, bytes, (ptr+i), *(ptr+i)); //estamos acessando um ponteiro 
            return 0;
        }