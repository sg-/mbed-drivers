/* mbed Microcontroller Library
 * Copyright (c) 2013-2014 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mbed.h"
#include "test_env.h"

int main() {
    MBED_HOSTTEST_TIMEOUT(10);
    MBED_HOSTTEST_SELECT(detect_auto);
    MBED_HOSTTEST_DESCRIPTION(Simple detect test);
    MBED_HOSTTEST_START("DTCT_1");

    notify_start();
    printf("MBED: Target '%s'\r\n", TEST_SUITE_TARGET_NAME);
    printf("MBED: Test ID '%s'\r\n", TEST_SUITE_TEST_ID);
    printf("MBED: UUID '%s'\r\n", TEST_SUITE_UUID);
    MBED_HOSTTEST_RESULT(true);
}
