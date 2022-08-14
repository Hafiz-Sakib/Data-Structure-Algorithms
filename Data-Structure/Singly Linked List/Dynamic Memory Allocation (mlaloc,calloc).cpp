---------------------------------------------------------------------------------------

    malloc = allocate a single large block of
             contigious heap memory accroding
             to the size specified.
             It returns the first memory address.

    syntex = (void*) malloc (size_you_need * sizeof(data_type));

    example =

        int *ptr=(*int)malloc(10*sizeof(int));


-------------------------------------------------------------------------------------


    calloc = kind of malloc but have differences like
             it initialize 0 of those location.
             It returns the first memory address.

    syntex = (void*) calloc (size_you_need , sizeof(data_type));

    example =

        int *ptr=(int*)calloc(10,sizeof(int));


--------------------------------------------------------------------------------------

    Run This =

        int *ptr=(int*) calloc(10,sizeof(int));
        cout<<*ptr<<endl;

        int *ptr1=(int*) malloc(10*sizeof(int));
        cout<<*ptr1<<endl;


---------------------------------------------------------------------------------------

    realloc = It used to change the size of
             the memory block without losing the old data.
             If empty memory is not sufficient
             then it returns NULL.

    syntex = void* realoc(1st memory location, new size);

    example =
                char *str;
                str = (char *) malloc(15);
                str = (char *) realloc(str, 25);

--------------------------------------------------------------------------------------


    free = After using the memory we need to empty the memory
           neither it will shows that it is in use because its
           allocate in heap memory not in stack memory.

    syntex = free(used pointer);

----------------------------------------------------------------------------------------

