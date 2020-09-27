#include "../main/length.h"
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

TEST(QuantityInchTests, _1inch_and_1inch__should_be_equal) { 
    Quantity first_one_inch(3.0, &Length::FEET);
    Quantity seconf_one_inch(1.0, &Length::YARD);
    ASSERT_EQ(first_one_inch, seconf_one_inch);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
