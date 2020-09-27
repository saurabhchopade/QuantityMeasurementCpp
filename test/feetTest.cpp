#include "../main/length.h"
#include "../main/volume.h"
#include <gtest/gtest.h>
#include "../main/quantity.h"

TEST(FeetTests, _0feet_and_0feet__should_be_equal) { 
    Quantity first_zero_feet(0, &Length::FEET), second_zero_feet(0, &Length::FEET); 
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(FeetTests, _null_feet_and_1feet__should_not_be_equal) { 
    Quantity first_one_feet(1.0, &Length::FEET);
    Quantity second;
    ASSERT_FALSE(first_one_feet == second);
}

TEST(FeetTests, _same_Ref_for_feet__should_be_equal) { 
    Quantity *first_ref = new Quantity(1.0, &Length::FEET);
    Quantity *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityFeetTests, _same_type_For_feet__should_be_equal) { 
    Quantity first_one_feet(1.0, &Length::FEET), second_one_feet(1.0, &Length::FEET); 
    ASSERT_EQ(first_one_feet, first_one_feet);
}

TEST(QuantityFeetTests, _1feet_and_2feet__should_not_be_equal) { 
    Quantity first_one_feet(1.0, &Length::FEET), second_two_feet(2.0, &Length::FEET); 
    ASSERT_FALSE(first_one_feet == second_two_feet);
}


TEST(QuantityInchTests, _0inch_and_0inch__should_be_equal) { 
    Quantity first_zero_inch(0.0, &Length::INCH), second_zero_inch(0.0, &Length::INCH); 
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(QuantityInchTests, _null_inch_and_1inch__should_not_be_equal) { 
    Quantity first_one_inch(1.0,&Length::INCH);
    Quantity second;
    ASSERT_FALSE(first_one_inch == second);
}

TEST(QuantityInchTests, _same_Ref_for_inch__should_be_equal) { 
    Quantity *first_ref = new  Quantity(1.0,&Length::INCH);
    Quantity *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(QuantityInchTests, _same_type_For_inch__should_be_equal) { 
    Quantity first_one_inch(1.0, &Length::INCH), second_one_inch(1.0, &Length::INCH); 
    ASSERT_EQ(first_one_inch, first_one_inch);
}

TEST(QuantityInchTests, _1inch_and_2inch__should_not_be_equal) { 
    Quantity first_one_inch(1.0, &Length::INCH);
    Quantity second_two_inch(2.0, &Length::INCH); 
    ASSERT_FALSE(first_one_inch == second_two_inch);
}

TEST(QuantityInchTests, _3feet_and_1yard__should_be_equal) { 
    Quantity first_one_inch(3.0, &Length::FEET);
    Quantity second_one_inch(1.0, &Length::YARD);
    ASSERT_EQ(first_one_inch, second_one_inch);
}

TEST(QuantityTests, _1feet_and_1yard__should_not_be_equal) { 
    Quantity first_one_feet(1.0, &Length::FEET);
    Quantity second_one_yard(1.0, &Length::YARD);
    ASSERT_NE(first_one_feet, second_one_yard);
}

TEST(QuantityTests, _1inch_and_1yard__should_not_be_equal) { 
    Quantity first_one_inch(1.0, &Length::INCH);
    Quantity second_one_yard(1.0, &Length::YARD);
    ASSERT_NE(first_one_inch, second_one_yard);
}

TEST(QuantityTests, _1yard_and_36inch__should_be_equal) { 
    Quantity first_one_inch(1.0, &Length::YARD);
    Quantity second_one_yard(36.0, &Length::INCH);
    ASSERT_EQ(first_one_inch, second_one_yard);
}

TEST(QuantityTests, _36inch_and_1yard__should_be_equal) { 
    Quantity first_one_inch(36.0, &Length::INCH);
    Quantity second_one_yard(1.0, &Length::YARD);
    ASSERT_EQ(first_one_inch, second_one_yard);
}

TEST(QuantityTests, _1yard_and_3feet__should_be_equal) { 
    Quantity first_one_yard(1.0, &Length::YARD);
    Quantity second_one_feet(3.0, &Length::FEET);
    ASSERT_EQ(first_one_yard, second_one_feet);
}

TEST(QuantityTests, _2inch_and_5cm__should_be_equal) { 
    Quantity first_one_inch(2.0, &Length::INCH);
    Quantity second_one_cm(5.0, &Length::CM);
    ASSERT_EQ(first_one_inch, second_one_cm);
}

TEST(QuantityTests, _2inch_and_2inch_equal_to_4inch_should_be_equal) { 
    Quantity first_two_inch(2.0, &Length::INCH);
    Quantity second_two_inch(2.0, &Length::INCH);
    Quantity third_four_inch(4.0, &Length::INCH);
    ASSERT_EQ(third_four_inch, first_two_inch + second_two_inch);
}

TEST(QuantityTests, _1feet_and_2inch_equal_to_14inch_should_be_equal) { 
    Quantity first_one_feet(1.0, &Length::FEET);
    Quantity second_two_inch(2.0, &Length::INCH);
    Quantity third_14_inch(14.0, &Length::INCH);
    ASSERT_EQ(third_14_inch, first_one_feet + second_two_inch);
}

TEST(QuantityTests, _1feet_and_1feet_equal_to_24inch_should_be_equal) { 
    Quantity first_one_feet(1.0, &Length::FEET);
    Quantity second_one_feet(1.0, &Length::FEET);
    Quantity third_24_inch(24.0, &Length::INCH);
    ASSERT_EQ(third_24_inch, first_one_feet + second_one_feet);
}

TEST(QuantityTests, _2inch_and_2_point_5cm_equal_to_3inch_should_be_equal) { 
    Quantity first_two_inch(2.0, &Length::INCH);
    Quantity second_2point_five_cm(2.5, &Length::CM);
    Quantity third_3_inch(3.0, &Length::INCH);
    ASSERT_EQ(third_3_inch, first_two_inch + second_2point_five_cm);
}

TEST(QuantityTests, _1gallon_and_3point_seven_eight_litres__should_be_equal) { 
    Quantity first_one_gallon(1000.00, &Volume::GALLON);
    Quantity second_3point_seven_eight_litres(3780.00, &Volume::LITRES);
    ASSERT_EQ(first_one_gallon, second_3point_seven_eight_litres);
}

TEST(QuantityTests, _1litre_and_100ml__should_be_equal) { 
    Quantity first_one_litre(1.00, &Volume::LITRES);
    Quantity second_100_ml(1000.00, &Volume::ML);
    ASSERT_EQ(first_one_litre, second_100_ml);
}

TEST(QuantityTests, _1gallon_and_3_point_78litres_equal_to_7point_57litre_should_be_equal) { 
    Quantity first_gallon(1.0, &Volume::GALLON);
    Quantity second_litre(3.78, &Volume::LITRES);
    Quantity third_addition_litres(7.56, &Volume::LITRES);
    ASSERT_EQ(third_addition_litres, first_gallon + second_litre);
}

TEST(QuantityTests, _1litre_and_1000ml_equal_to_2litres_should_be_equal) { 
    Quantity first_one_litre(1.0, &Volume::LITRES);
    Quantity second_1000ml(1000.00, &Volume::ML);
    Quantity third_addition_volumes(2.0, &Volume::LITRES);
    ASSERT_EQ(third_addition_volumes, first_one_litre + second_1000ml);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
