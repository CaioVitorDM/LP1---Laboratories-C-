#ifndef CLASSES_H
#define CLASSES_H

class Complexo {
	private:
		float real, imag;

	public:
		Complexo();
		Complexo(float r, float i);
		Complexo(Complexo &c);
		float getReal();
		void setReal(float r);
		float getImaginarie();
		void setImaginarie(float i);
		float getModule();
		Complexo operator+ (Complexo &c);
		Complexo operator- (Complexo &c);
		Complexo operator* (Complexo &c);
		friend std::ostream& operator<< (std::ostream &o, Complexo const &c);
		~Complexo();
};











#endif 
