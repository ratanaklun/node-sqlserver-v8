//---------------------------------------------------------------------------------------------------------------------------------
// File: Column.h
// Contents: Column objects from SQL Server to return as Javascript types
// 
// Copyright Microsoft Corporation and contributors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// You may obtain a copy of the License at:
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//---------------------------------------------------------------------------------------------------------------------------------

#pragma once

namespace mssql
{
    using namespace std;

    class Column
    {
    public:
	   virtual ~Column()
	   {
	   }

	   virtual Handle<Value> ToValue() = 0;
	   virtual bool More() const { return false; }
    };    
}