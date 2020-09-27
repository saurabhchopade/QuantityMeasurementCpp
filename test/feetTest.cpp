#include "../main/feet.h"
#include "../main/inch.h"
#include <gtest/gtest.h>

TEST(FeetTests, _0feet_and_0feet__should_be_equal) { 
    Feet first_zero_feet(0), second_zero_feet(0); 
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

TEST(FeetTests, _null_feet_and_1feet__should_not_be_equal) { 
    Feet first_one_feet(1);
    ASSERT_FALSE(first_one_feet == nullptr);
}

TEST(FeetTests, _same_Ref_for_feet__should_be_equal) { 
    Feet *first_ref = new Feet(1.0);
    Feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

TEST(FeetTests, _same_type_For_feet__should_be_equal) { 
    Feet first_one_feet(1), second_one_feet(1); 
    ASSERT_EQ(first_one_feet, first_one_feet);
}

TEST(FeetTests, _1feet_and_2feet__should_not_be_equal) { 
    Feet first_one_feet(1.0), second_two_feet(2.0); 
    ASSERT_FALSE(first_one_feet == second_two_feet);
}


TEST(InchTests, _0inch_and_0inch__should_be_equal) { 
    Inch first_zero_inch(0), second_zero_inch(0); 
    ASSERT_EQ(first_zero_inch, second_zero_inch);
}

TEST(InchTests, _null_inch_and_1inch__should_not_be_equal) { 
    Inch first_one_inch(1);
    ASSERT_FALSE(first_one_inch == nullptr);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
