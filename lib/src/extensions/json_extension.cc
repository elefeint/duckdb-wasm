#include "duckdb/web/extensions/json_extension.h"

#include "json-extension.hpp"

extern "C" void duckdb_web_json_init(duckdb::DuckDB* db) { db->LoadExtension<duckdb::JSONExtension>(); }
