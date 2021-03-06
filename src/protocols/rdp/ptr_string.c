/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "config.h"
#include "ptr_string.h"

#include <guacamole/client.h>

#include <stdio.h>
#include <stdlib.h>

void guac_rdp_ptr_to_string(void* data, char* str) {

    /* Convert pointer to string */
    sprintf(str, "%p", data);

}

void* guac_rdp_string_to_ptr(const char* str) {

    void* data;

    /* Convert string to pointer */
    sscanf(str, "%p", &data);

    return data;

}

