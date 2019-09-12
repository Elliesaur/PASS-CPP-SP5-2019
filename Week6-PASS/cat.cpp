#include "cat.h"

// Cat(CollarBase collar) {
/*   super(collar);
 *
 * }
 */
//
Cat::Cat(std::shared_ptr<AnimalCollar> collar)
    : Animal{collar}
{

}
