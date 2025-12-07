/*
	test.cpp - entry point
	Copyright (C) 2025 Camren Chraplak

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <Arduino.h>
#include <hardware_timer_test.h>
#include <unity.h>

void setUp(void) {
	// set stuff up here
}

void tearDown(void) {
	// clean stuff up here
}

/**
 * Runs timer tests
 * 
 * @return amount of failures from UNITY_END()
 */
int runTimerTests(void) {
	UNITY_BEGIN();
	testTimers();
	return UNITY_END();
}

void setup() {
	delay(2000);
	runTimerTests();
}

void loop() {}