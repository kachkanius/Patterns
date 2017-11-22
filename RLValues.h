#ifndef RLVALUES_H
#define RLVALUES_H

void test_rv_Values();

#include <iostream>
#include <algorithm>

class A
{
public:

    // Simple constructor that initializes the resource.
    explicit A(size_t length)
        : mLength(length), mData(new int[length])
    {
        std::cout << "A(size_t). length = "
                  << mLength << "." << std::endl;
    }

    // Destructor.
    ~A()
    {
        std::cout << "~A(). length = " << mLength << ".";

        if (mData != NULL) {
            std::cout << " Deleting resource.";
            delete[] mData;  // Delete the resource.
        }

        std::cout << std::endl;
    }

    // Copy constructor.
    A(const A& other)
        : mLength(other.mLength), mData(new int[other.mLength])
    {
        std::cout << "A(const A&). length = "
                  << other.mLength << ". Copying resource." << std::endl;

        std::copy(other.mData, other.mData + mLength, mData);
    }

    // Copy assignment operator.
    A& operator=(const A& other)
    {
        std::cout << "operator=(const A&). length = "
                  << other.mLength << ". Copying resource." << std::endl;

        if (this != &other) {
            delete[] mData;  // Free the existing resource.
            mLength = other.mLength;
            mData = new int[mLength];
            std::copy(other.mData, other.mData + mLength, mData);
        }
        return *this;
    }

    // Move constructor.
    A(A&& other) : mLength(0), mData(NULL)
    {
        std::cout << "A(A&&). length = "
                  << other.mLength << ". Moving resource.\n";

        // Copy the data pointer and its length from the
        // source object.
        mLength = other.mLength;
        mData = other.mData;

        // Release the data pointer from the source object so that
        // the destructor does not free the memory multiple times.
        other.mLength = 0;
        other.mData = NULL;
    }

    // Move assignment operator.
    A& operator=(A&& other)
    {
        std::cout << "operator=(A&&). length = "
                  << other.mLength << "." << std::endl;

        if (this != &other) {
            // Free the existing resource.
            delete[] mData;

            // Copy the data pointer and its length from the
            // source object.
            mData = other.mData;
            mLength = other.mLength;

            // Release the data pointer from the source object so that
            // the destructor does not free the memory multiple times.
            other.mData = NULL;
            other.mLength = 0;
        }
        return *this;
    }

    // Retrieves the length of the data resource.
    size_t Length() const
    {
        return mLength;
    }
    int* get_mData() { return mData; }

    void swap(A& other)
      {
        A temp = std::move(other);
        other = std::move(*this);
        *this = std::move(temp);
      }

private:
    size_t mLength; // The length of the resource.
    int* mData;     // The resource.
};



#endif // RLVALUES_H
