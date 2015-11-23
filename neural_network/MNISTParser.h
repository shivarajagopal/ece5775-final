#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#define TRAINING_SIZE 2000
#define TESTING_SIZE 200
#define IMAGE_SIZE 784

int reverseInt (int i) 
{
    unsigned char c1, c2, c3, c4;

    c1 = i & 255;
    c2 = (i >> 8) & 255;
    c3 = (i >> 16) & 255;
    c4 = (i >> 24) & 255;

    return ((int)c1 << 24) + ((int)c2 << 16) + ((int)c3 << 8) + c4;
}

void read_mnist(float* training_data, int* training_labels, float* testing_data, int* testing_labels)
{
    unsigned char temp;
    int tempi;

    int count1[10];
    int count2[10];
    for (int i = 0; i < 10; i++) {
        count1[i] = 0;
        count2[i] = 0;
    }
    std::ifstream file;
    // file.open("MNIST_data/testing_images", std::ios::binary);
    // if (file.is_open())
    // {
    //     int magic_number=0;
    //     int number_of_images=0;
    //     int n_rows=0;
    //     int n_cols=0;
    //     file.read((char*)&magic_number,sizeof(magic_number)); 
    //     magic_number= reverseInt(magic_number);
    //     file.read((char*)&number_of_images,sizeof(number_of_images));
    //     number_of_images= reverseInt(number_of_images);
    //     file.read((char*)&n_rows,sizeof(n_rows));
    //     n_rows= reverseInt(n_rows);
    //     file.read((char*)&n_cols,sizeof(n_cols));
    //     n_cols= reverseInt(n_cols);

    //     //std::cout << "magic number" << magic_number << "\nnumber_of_images" << number_of_images << "\nn_rows" << n_rows << "\nn_cols" << n_cols << "\n\n";
    //     for(int i=0;i<TESTING_SIZE;++i)
    //     {
    //         for(int r=0;r<n_rows;++r)
    //         {
    //             for(int c=0;c<n_cols;++c)
    //             {
    //                 file.read((char*)&temp,sizeof(temp));
    //                 tempi = (int) temp;
    //                 testing_data[i][n_cols*r + c] = (float) tempi;
    //             }
    //             if (i < 10) std::cout << "\n";
    //         }
    //         if (i < 10) std::cout << "\n";
    //     }
    // }
    // file.close();
    // file.clear();

    // file.open("MNIST_data/testing_labels", std::ios::binary);
    // if (file.is_open())
    // {
    //     int magic_number=0;
    //     int number_of_images=0;
    //     file.read((char*)&magic_number,sizeof(magic_number)); 
    //     magic_number= reverseInt(magic_number);
    //     file.read((char*)&number_of_images,sizeof(number_of_images));
    //     number_of_images= reverseInt(number_of_images);

    //     //std::cout << "magic number" << magic_number << "\nnumber_of_images" << number_of_images << "\n\n";
    //     for(int i=0;i<TESTING_SIZE;++i)
    //     {
    //         file.read((char*)&temp,1);
    //         testing_labels[i] = (int) temp;
    //         count2[testing_labels[i]]++;
    //     }
    // }
    // file.close();
    // file.clear();

    file.open("MNIST_data/training_images", std::ios::binary);
    if (file.is_open())
    {
        int magic_number=0;
        int number_of_images=0;
        int n_rows=0;
        int n_cols=0;
        file.read((char*)&magic_number,sizeof(magic_number)); 
        magic_number= reverseInt(magic_number);
        file.read((char*)&number_of_images,sizeof(number_of_images));
        number_of_images= reverseInt(number_of_images);
        file.read((char*)&n_rows,sizeof(n_rows));
        n_rows= reverseInt(n_rows);
        file.read((char*)&n_cols,sizeof(n_cols));
        n_cols= reverseInt(n_cols);

        //std::cout << "magic number" << magic_number << "\nnumber_of_images" << number_of_images << "\nn_rows" << n_rows << "\nn_cols" << n_cols << "\n\n";
        for(int i=0;i<TRAINING_SIZE;++i)
        {
            for(int r=0;r<n_rows;++r)
            {
                for(int c=0;c<n_cols;++c)
                {
                    file.read((char*)&temp,sizeof(temp));
                    training_data[i*IMAGE_SIZE + n_cols*r + c] = (float) temp;
                }
            }
        }
        for(int i=0;i<TESTING_SIZE;++i)
        {
            for(int r=0;r<n_rows;++r)
            {
                for(int c=0;c<n_cols;++c)
                {
                    file.read((char*)&temp,sizeof(temp));
                    testing_data[i*IMAGE_SIZE + n_cols*r + c] = (float) temp;
                }
            }
        }
    }
    file.close();
    file.clear();

    file.open("MNIST_data/training_labels", std::ios::binary);
    if (file.is_open())
    {
        int magic_number=0;
        int number_of_images=0;
        int n_rows=0;
        int n_cols=0;
        file.read((char*)&magic_number,sizeof(magic_number)); 
        magic_number= reverseInt(magic_number);
        file.read((char*)&number_of_images,sizeof(number_of_images));
        number_of_images= reverseInt(number_of_images);

        //std::cout << "magic number" << magic_number << "\nnumber_of_images" << number_of_images << "\n\n";
        for(int i=0;i<TRAINING_SIZE;++i)
        {
            file.read((char*)&temp,sizeof(temp));
            training_labels[i] = (int) temp;
            count1[training_labels[i]]++;
        }
        for(int i=0;i<TESTING_SIZE;++i)
        {
            file.read((char*)&temp,sizeof(temp));
            testing_labels[i] = (int) temp;
            count2[testing_labels[i]]++;
        }
    }
    for (int i = 0; i < 10; i++) 
        std::cout << i << " -- count1= " << count1[i] << ", count2= " << count2[i] << "\n";
    file.close();
    file.clear();
}