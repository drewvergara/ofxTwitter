/*
 *  Tweet.h
 *
 *  Created by Douglas Edric Stanley on 10/12/10
 *  cc-by-sa 2010 www.abstractmachine.net. Some rights reserved.
 *  http://creativecommons.org/licenses/by-sa/3.0/
 *
 *  Adapted from code by Paul Shen
 *  cf. http://in.somniac.me/2010/01/openframeworks-http-requests-xml-parser/
 *
 */

#pragma once

#include "ofMain.h"

struct TweetAuthor {
	string name;
	string uri;
	string imageUri;
};

struct Tweet {

	string id;
	string link;
	string published;
	string updated;
	string title;
	string language;
	
	TweetAuthor author;
	
	Tweet() { }
	Tweet(string defaultString)	: title(defaultString) { }
	
	string print() {
		string str;
		str += "id:" + id;
		str +=  "\npublished:" + published;
		str +=  "\nupdated:" +updated;
		str +=  "\nlanguage:" + language;
		str +=  "\nauthor:name:" + author.name;
		str +=  "\nauthor:uri:" + author.uri;
		str +=  "\nauthor:imageUri:" + author.imageUri;
		str +=  "\nlink:" + link;
		str +=  "\ntitle:" + title;
		return str;
	}
	
};