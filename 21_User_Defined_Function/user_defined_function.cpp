#include <iostream>
// function - a block of reusable code.

void job_offer_email(std::string);

int main(){
    std::string applicant1 = "Aizel Vasquez";
    std::string applicant2 = "JC Magana";
    job_offer_email(applicant1);
    job_offer_email(applicant2);
    return 0;
}

void job_offer_email(std::string fullname){
    std::cout << "Hi " << fullname << "\n";
    std::cout << "We are happy to inform you that you aced the assessment. You have now a job offer in Associate Software Engineer position in our company. \n \n";
}