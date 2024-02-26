#include <string>
#include <cctype>
#include <algorithm>
#include <iostream>
#include <vector>

//Lambda [](){}
//Lambda function with parameters 
////auto add = [](int a,int b) {
////	return a + b;
////};
//////Lambda function with capture with value 
////int multiplier = 2;
////auto times = [multiplier](int a) {
////	return a * multiplier;
////};
////int result = times(4);

//RTTI - Run-Time Type Identification
void F_Choose();

void F_SnackBar(){
	std::string meal_name;
	std::vector <std::string> Position = { 
		"Calzone pizza",
		"Spicy chicken pizza",
		"Pepperoni pizza",
		"Pizza Margherita",
		"Proscutto pizza",
		
		"Imeretian khachapuri",
		"Megrelian khachapuri",
		
		"Classic burger",
		"Burger with four cheese",
		"Burger Prime",
		"Chicken Burger",
		
		"Club sandwich",
		"Tuna sandwich",
		"Cheese sandwich",
		"Grill Prime beef filet",
	};
	std::cout << "\n"" >: ";

	for (int i = 0; i < Position.size(); i++) {

		std::getline(std::cin >> std::ws, meal_name);
		std::transform(meal_name.begin(), meal_name.end(), meal_name.begin(), [](unsigned char n) {return std::tolower(n); });
		if (meal_name[0] != ' ')
		{
			if (meal_name == Position[i])
			{
				std::cout << "Correct" << std::endl;
			}
			else {

				std::cout << "Wrong" << std::endl;
			}

		}
	}
}

void F_Dessert(){

	std::string meal_name;
	std::vector <std::string> Position = { "Red velvet", "Creme brulee","Black Cake","Fondant","Carrot cake","Cheese cake","Tiramisu","Assorted Fruit" };
	std::cout << "\n"" >: ";

	for (int i = 0; i < Position.size(); i++) {

		std::getline(std::cin >> std::ws, meal_name);
		std::transform(meal_name.begin(), meal_name.end(), meal_name.begin(), [](unsigned char n) {return std::tolower(n); });
		if (meal_name[0] != ' ')
		{
			if (meal_name == Position[i])
			{
				std::cout << "Correct" << std::endl;
			}
			else {

				std::cout << "Wrong" << std::endl;
			}

		}
	}
}

void F_Pasta(){

	std::string meal_name;
	std::vector <std::string> Position = { "Shrimp fusili", "Tuna spagetti","Carbonara","Bolognese","Tagliatelle","Mac&Cheese","Chicken and mushroom penne","Chicken Penne Arabica"};
	std::cout << "\n"" >: ";

	for (int i = 0; i < Position.size(); i++) {

		std::getline(std::cin >> std::ws, meal_name);
		std::transform(meal_name.begin(), meal_name.end(), meal_name.begin(), [](unsigned char n) {return std::tolower(n); });
		if (meal_name[0] != ' ')
		{
			if (meal_name == Position[i])
			{
				std::cout << "Correct" << std::endl;
			}
			else {

				std::cout << "Wrong" << std::endl;
			}

		}
	}
}

void F_Soup(){

	std::string meal_name;
	std::vector <std::string> Position = { "Shrimp soup", "Salmon soup","Khinkali soup","Veal soup","Chicken consomme","Vegetable soup","Tom-Yam soup" };
	std::cout << "\n"" >: ";

	for (int i = 0; i < Position.size(); i++) {

		std::getline(std::cin >> std::ws, meal_name);
		std::transform(meal_name.begin(), meal_name.end(), meal_name.begin(), [](unsigned char n) {return std::tolower(n); });
		if (meal_name[0] != ' ')
		{
			if (meal_name == Position[i])
			{
				std::cout << "Correct" << std::endl;
			}
			else {

				std::cout << "Wrong" << std::endl;
			}

		}
	}
}

void F_Starter(){

	std::string meal_name;
	std::vector <std::string> Position = { "Hummus with chips", "Mexican Taco","Crispy shrimp with teryaki","Cheese Polenta","Chicken qesadilia","Deep fried chicken sticks","Mozarella sticks"};
	std::cout << "\n"" >: ";

	for (int i = 0; i < Position.size(); i++) {

		std::getline(std::cin >> std::ws, meal_name);
		std::transform(meal_name.begin(), meal_name.end(), meal_name.begin(), [](unsigned char n) {return std::tolower(n); });
		if (meal_name[0] != ' ')
		{
			if (meal_name == Position[i])
			{
				std::cout << "Correct" << std::endl;
			}
			else {

				std::cout << "Wrong" << std::endl;
			}

		}
	}

}

void F_Salad() {
	
	std::string meal_name;
	std::vector <std::string> Position = { "ceasar salad", "avocado salad","tuna salad","shrimp salad","pear salad" };
	std::cout << "\n"" >: ";
	
	for (int i = 0; i < Position.size(); i++){
		
	std::getline(std::cin >> std::ws, meal_name);
	std::transform(meal_name.begin(), meal_name.end(), meal_name.begin(), [](unsigned char n) {return std::tolower(n); });
	if (meal_name[0] != ' ')
	{
	if (meal_name == Position[i])
	{
		std::cout << "Correct" << std::endl;
	}
	else{

		std::cout << "Wrong" << std::endl;
		}

		}
	}

}


int main(){
	F_Choose();
}

void F_Choose() {
	int n = 0;
	std::cout << "\t\t\t=======CHOOSE OPTION========" << std::endl;
	std::cout << "1-SALAD\t 2-STARTER\t 3-SOUPS\t 4-PASTA\t 5-DESSERT\t 6-SNACK BAR MENU" << std::endl;
	std::cout << ">:";
	std::cin >> n;
	switch (n)
	{
	case 1:
		F_Salad();
		break;
	case 2:
		F_Starter();
		break;
	case 3:
		F_Soup();
	case 4:
		F_Pasta();
	case 5:
		F_Dessert();
	case 6:
		F_SnackBar();
	default:
		if (n > 6)std::cout << "There is no such an option" << std::endl;
		break;
	}

}