#include "Livro.h"

class Iterator {
    public:
        virtual bool hasNext() = 0;
        virtual Livro* next() = 0;
        virtual ~Iterator() = default;
};
