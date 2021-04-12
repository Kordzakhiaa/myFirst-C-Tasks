double first_column_average = 0;
    double first_quantity = 0, first_sum = 0;

    double second_column_average = 0;
    double second_quantity = 0, second_sum = 0;

    for (int i = 0; i < 4;)
    {
        for (int j = 0; j < 4; j++)
        {
            while (i < 4)
            {
                first_sum += my_array[i][j];
                first_quantity += 1;
                i++;
            }
        }
    }
    first_column_average = first_sum / first_quantity;
    printf("First Column Average -> %.2f / %.2f = %.2f\n", first_sum, first_quantity, first_column_average);
    
    for (int i = 0; i < 4;)
    {
        for (int j = 1; j < 4; j++)
        {
            while (i < 4)
            {
                second_sum += my_array[i][j];
                second_quantity += 1;
                i++;
            }
        }
    }
    second_column_average = second_sum / second_quantity;
    printf("Second Column Average -> %.2f / %.2f = %.2f\n", second_sum, second_quantity, second_column_average);
