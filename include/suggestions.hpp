// Copyright 2018 Your Name <your_email>

#ifndef SUGGESTSERVICE_SUGGESTIONS_HPP
#define SUGGESTSERVICE_SUGGESTIONS_HPP

#include <suggest.grpc.pb.h>
#include <shared_mutex>
#include <nlohmann/json.hpp>

class SuggestServiceAnswer : public suggest::Suggest::Service {
 private:
  std::shared_mutex parse_mutex;
  nlohmann::json suggestions;

  grpc::Status Answer(grpc::ServerContext* context,
                      const suggest::SuggestRequest* request,
                      suggest::SuggestResponse* response) override;

  [[noreturn]] void ParseJson();

 public:
  SuggestServiceAnswer();
};

#endif  // SUGGESTSERVICE_SUGGESTIONS_HPP
