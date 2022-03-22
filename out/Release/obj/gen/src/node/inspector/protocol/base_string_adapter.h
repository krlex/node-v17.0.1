// This file is generated by Parser_h.template.

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef node_inspector_protocol_BASE_STRING_ADAPTER_H
#define node_inspector_protocol_BASE_STRING_ADAPTER_H

#include <memory>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/macros.h"
#include "base/memory/ref_counted_memory.h"
#include "base/strings/string_number_conversions.h"

namespace base {
class Value;
}

namespace node {
namespace inspector {
namespace protocol {

class Value;

using String = std::string;
using ProtocolMessage = std::string;

class  StringBuilder {
 public:
  StringBuilder();
  ~StringBuilder();
  void append(const String&);
  void append(char);
  void append(const char*, size_t);
  String toString();
  void reserveCapacity(size_t);

 private:
  std::string string_;
};

class  StringUtil {
 public:
  static String substring(const String& s, unsigned pos, unsigned len) {
    return s.substr(pos, len);
  }
  static String fromInteger(int number) { return base::NumberToString(number); }
  static String fromDouble(double number) {
    String s = base::NumberToString(number);
    if (!s.empty()) {  // .123 -> 0.123; -.123 -> -0.123 for valid JSON.
      if (s[0] == '.')
        s.insert(/*index=*/ 0, /*count=*/ 1, /*ch=*/ '0');
      else if (s[0] == '-' && s.size() >= 2 && s[1] == '.')
        s.insert(/*index=*/ 1, /*count=*/ 1, /*ch=*/ '0');
    }
    return s;
  }
  static double toDouble(const char* s, size_t len, bool* ok) {
    double v = 0.0;
    *ok = base::StringToDouble(std::string(s, len), &v);
    return *ok ? v : 0.0;
  }
  static size_t find(const String& s, const char* needle) {
    return s.find(needle);
  }
  static size_t find(const String& s, const String& needle) {
    return s.find(needle);
  }
  static const size_t kNotFound = static_cast<size_t>(-1);
  static void builderAppend(StringBuilder& builder, const String& s) {
    builder.append(s);
  }
  static void builderAppend(StringBuilder& builder, char c) {
    builder.append(c);
  }
  static void builderAppend(StringBuilder& builder, const char* s, size_t len) {
    builder.append(s, len);
  }
  static void builderAppendQuotedString(StringBuilder& builder,
                                        const String& str);
  static void builderReserve(StringBuilder& builder, unsigned capacity) {
    builder.reserveCapacity(capacity);
  }
  static String builderToString(StringBuilder& builder) {
    return builder.toString();
  }

  static std::unique_ptr<Value> parseMessage(const std::string& message, bool binary);
  static ProtocolMessage jsonToMessage(String message);
  static ProtocolMessage binaryToMessage(std::vector<uint8_t> message);

  static String fromUTF8(const uint8_t* data, size_t length) {
    return std::string(reinterpret_cast<const char*>(data), length);
  }

  static String fromUTF16(const uint16_t* data, size_t length);

  static const uint8_t* CharactersLatin1(const String& s) { return nullptr; }
  static const uint8_t* CharactersUTF8(const String& s) {
    return reinterpret_cast<const uint8_t*>(s.data());
  }
  static const uint16_t* CharactersUTF16(const String& s) { return nullptr; }
  static size_t CharacterCount(const String& s) { return s.size(); }
};

// A read-only sequence of uninterpreted bytes with reference-counted storage.
class  Binary {
 public:
  Binary(const Binary&);
  Binary();
  ~Binary();

  const uint8_t* data() const { return bytes_->front(); }
  size_t size() const { return bytes_->size(); }
  scoped_refptr<base::RefCountedMemory> bytes() const { return bytes_; }

  String toBase64() const;

  static Binary fromBase64(const String& base64, bool* success);
  static Binary fromRefCounted(scoped_refptr<base::RefCountedMemory> memory);
  static Binary fromVector(std::vector<uint8_t> data);
  static Binary fromString(std::string data);
  static Binary fromSpan(const uint8_t* data, size_t size);

 private:
  explicit Binary(scoped_refptr<base::RefCountedMemory> bytes);
  scoped_refptr<base::RefCountedMemory> bytes_;
};

std::unique_ptr<Value> toProtocolValue(const base::Value* value, int depth);
std::unique_ptr<base::Value> toBaseValue(Value* value, int depth);
} // namespace node
} // namespace inspector
} // namespace protocol

#endif // !defined(node_inspector_protocol_BASE_STRING_ADAPTER_H)
