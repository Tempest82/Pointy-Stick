// Scraper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <curl/curl.h>

//Curl Configuration Check
int CurlTest()
{
	// Code below performs a quick check of applicable 
	CURL *curl = curl_easy_init();
	if (curl)
	{
		printf("curl_easy_init() succeeded!\n");
		return 0;
	}
	else
		fprintf(stderr, "Error calling curl_easy_init().\n");
	return 1;
}

int main()
{
	//Check if the system is working
	return CurlTest();
}

