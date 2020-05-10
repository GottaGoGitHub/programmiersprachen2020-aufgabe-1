#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b)
{
  if(b == 0) 
    return a;
  return gcd(b, a % b);
}

TEST_CASE("describe_gcd", "[gcd]")
{
  REQUIRE(gcd(2, 4) == 2);
  REQUIRE(gcd(9, 6) == 3);
  REQUIRE(gcd(3, 7) == 1);
}

int checksum(long num)
{
  if(num < 0)
    {
      std::cout << "Error (negative Zahl)";
      return 0;
    }
  else if(num < 10)
    return num;
  else
  {
    return num%10 + checksum(num/10);
  }
}

TEST_CASE("describe_checksum", "[checksum]")
{
  REQUIRE(checksum(120230) == 8);
  REQUIRE(checksum(0) == 0);
  REQUIRE(checksum(-124) == 0);
}

float fract(float num)
{
  float res = num - (int)num;
  return res;
}

TEST_CASE("describe_fract", "[fract]")
{
  REQUIRE(fract(123.345) == Approx(0.345));
  REQUIRE(fract(2.5564) == Approx(0.5564));
  REQUIRE(fract(-1.23) == Approx(-0.23));
}

float cylvolume(float radius, float height)
{
  float res = M_PI * radius * radius * height;
  return res;
}

TEST_CASE("cylvolume", "[cylvolume]")
{
  REQUIRE(cylvolume(5, 10) == Approx(785.4));
  REQUIRE(cylvolume(0, 1000) == 0);
}

float cylsurface(float radius, float height)
{
  int res = 2 * M_PI * radius * radius + ((2 * M_PI * radius) * height);
  return res;
}

TEST_CASE("cylsurface", "[cylsurface]")
{
  REQUIRE(cylsurface(5, 10) == Approx(471));
  REQUIRE(cylsurface(0, 1000) == 0);
}

int factorial(int num)
{
  int res = 1;
  for(int i = 1; i <= num; ++i)
  {
    res *= i;
  }
  return res;
}

TEST_CASE("factorial", "[factorial]")
{
  REQUIRE(factorial(4) == 24);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(0) == 1);
}

bool isPrime(int num)
{
  if(num == 2) return true;
  for(int i = 2; i <= num/2; ++i)
  {
    if(num % i != 0) return true;
    else
    {
      return false;
    }
  }
}

TEST_CASE("isPrime", "[isPrime]")
{
  REQUIRE(isPrime(2) == true);
  REQUIRE(isPrime(7) == true);
  REQUIRE(isPrime(1980) == false);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}