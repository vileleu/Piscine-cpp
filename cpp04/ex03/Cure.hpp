#ifndef CURE_HPP
#define CURE_HPP

#include "interfaces.hpp"

class Cure : public AMateria
{
	private:

	public:

	Cure();
	Cure(Cure const &copy);
	virtual	~Cure();

	virtual	AMateria* clone() const;
	virtual void	use(ICharacter &target);

	AMateria	&operator=(AMateria const &obj);
};

#endif
