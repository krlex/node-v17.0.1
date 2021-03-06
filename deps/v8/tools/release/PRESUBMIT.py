# Copyright 2017 the V8 project authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

def _CommonChecks(input_api, output_api):
  tests = input_api.canned_checks.GetUnitTestsInDirectory(
      input_api, output_api, '.', files_to_check=['test_scripts.py$'])
  return input_api.RunTests(tests)

def CheckChangeOnUpload(input_api, output_api):
  return _CommonChecks(input_api, output_api)

def CheckChangeOnCommit(input_api, output_api):
  return _CommonChecks(input_api, output_api)
