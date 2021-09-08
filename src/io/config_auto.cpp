/*!
 * Copyright (c) 2018 Microsoft Corporation. All rights reserved.
 * Licensed under the MIT License. See LICENSE file in the project root for license information.
 *
 * \note
 * This file is auto generated by LightGBM\helpers\parameter_generator.py from LightGBM\include\LightGBM\config.h file.
 */
#include<LightGBM/config.h>
namespace LightGBM {
  const std::unordered_map<std::string, std::string>& Config::alias_table() {
    static std::unordered_map<std::string, std::string> aliases({
    {"config_file", "config"},
    {"task_type", "task"},
    {"objective_type", "objective"},
    {"app", "objective"},
    {"application", "objective"},
    {"boosting_type", "boosting"},
    {"boost", "boosting"},
    {"linear_trees", "linear_tree"},
    {"train", "data"},
    {"train_data", "data"},
    {"train_data_file", "data"},
    {"data_filename", "data"},
    {"test", "valid"},
    {"valid_data", "valid"},
    {"valid_data_file", "valid"},
    {"test_data", "valid"},
    {"test_data_file", "valid"},
    {"valid_filenames", "valid"},
    {"num_iteration", "num_iterations"},
    {"n_iter", "num_iterations"},
    {"num_tree", "num_iterations"},
    {"num_trees", "num_iterations"},
    {"num_round", "num_iterations"},
    {"num_rounds", "num_iterations"},
    {"num_boost_round", "num_iterations"},
    {"n_estimators", "num_iterations"},
    {"shrinkage_rate", "learning_rate"},
    {"eta", "learning_rate"},
    {"num_leaf", "num_leaves"},
    {"max_leaves", "num_leaves"},
    {"max_leaf", "num_leaves"},
    {"tree", "tree_learner"},
    {"tree_type", "tree_learner"},
    {"tree_learner_type", "tree_learner"},
    {"inner_thread_num", "inner_thread_num"},
    {"num_thread", "num_threads"},
    {"nthread", "num_threads"},
    {"nthreads", "num_threads"},
    {"n_jobs", "num_threads"},
    {"device", "device_type"},
    {"random_seed", "seed"},
    {"random_state", "seed"},
    {"hist_pool_size", "histogram_pool_size"},
    {"min_data_per_leaf", "min_data_in_leaf"},
    {"min_data", "min_data_in_leaf"},
    {"min_child_samples", "min_data_in_leaf"},
    {"min_sum_hessian_per_leaf", "min_sum_hessian_in_leaf"},
    {"min_sum_hessian", "min_sum_hessian_in_leaf"},
    {"min_hessian", "min_sum_hessian_in_leaf"},
    {"min_child_weight", "min_sum_hessian_in_leaf"},
    {"sub_row", "bagging_fraction"},
    {"subsample", "bagging_fraction"},
    {"bagging", "bagging_fraction"},
    {"pos_sub_row", "pos_bagging_fraction"},
    {"pos_subsample", "pos_bagging_fraction"},
    {"pos_bagging", "pos_bagging_fraction"},
    {"neg_sub_row", "neg_bagging_fraction"},
    {"neg_subsample", "neg_bagging_fraction"},
    {"neg_bagging", "neg_bagging_fraction"},
    {"subsample_freq", "bagging_freq"},
    {"bagging_fraction_seed", "bagging_seed"},
    {"sub_feature", "feature_fraction"},
    {"colsample_bytree", "feature_fraction"},
    {"sub_feature_bynode", "feature_fraction_bynode"},
    {"colsample_bynode", "feature_fraction_bynode"},
    {"extra_tree", "extra_trees"},
    {"early_stopping_rounds", "early_stopping_round"},
    {"early_stopping", "early_stopping_round"},
    {"n_iter_no_change", "early_stopping_round"},
    {"max_tree_output", "max_delta_step"},
    {"max_leaf_output", "max_delta_step"},
    {"reg_alpha", "lambda_l1"},
    {"reg_lambda", "lambda_l2"},
    {"lambda", "lambda_l2"},
    {"min_split_gain", "min_gain_to_split"},
    {"rate_drop", "drop_rate"},
    {"topk", "top_k"},
    {"mc", "monotone_constraints"},
    {"monotone_constraint", "monotone_constraints"},
    {"monotone_constraining_method", "monotone_constraints_method"},
    {"mc_method", "monotone_constraints_method"},
    {"monotone_splits_penalty", "monotone_penalty"},
    {"ms_penalty", "monotone_penalty"},
    {"mc_penalty", "monotone_penalty"},
    {"feature_contrib", "feature_contri"},
    {"fc", "feature_contri"},
    {"fp", "feature_contri"},
    {"feature_penalty", "feature_contri"},
    {"fs", "forcedsplits_filename"},
    {"forced_splits_filename", "forcedsplits_filename"},
    {"forced_splits_file", "forcedsplits_filename"},
    {"forced_splits", "forcedsplits_filename"},
    {"verbose", "verbosity"},
    {"model_input", "input_model"},
    {"model_in", "input_model"},
    {"model_output", "output_model"},
    {"model_out", "output_model"},
    {"save_period", "snapshot_freq"},
    {"subsample_for_bin", "bin_construct_sample_cnt"},
    {"data_seed", "data_random_seed"},
    {"is_sparse", "is_enable_sparse"},
    {"enable_sparse", "is_enable_sparse"},
    {"sparse", "is_enable_sparse"},
    {"is_enable_bundle", "enable_bundle"},
    {"bundle", "enable_bundle"},
    {"is_pre_partition", "pre_partition"},
    {"two_round_loading", "two_round"},
    {"use_two_round_loading", "two_round"},
    {"has_header", "header"},
    {"label", "label_column"},
    {"weight", "weight_column"},
    {"group", "group_column"},
    {"group_id", "group_column"},
    {"query_column", "group_column"},
    {"query", "group_column"},
    {"query_id", "group_column"},
    {"ignore_feature", "ignore_column"},
    {"blacklist", "ignore_column"},
    {"cat_feature", "categorical_feature"},
    {"categorical_column", "categorical_feature"},
    {"cat_column", "categorical_feature"},
    {"is_save_binary", "save_binary"},
    {"is_save_binary_file", "save_binary"},
    {"is_predict_raw_score", "predict_raw_score"},
    {"predict_rawscore", "predict_raw_score"},
    {"raw_score", "predict_raw_score"},
    {"is_predict_leaf_index", "predict_leaf_index"},
    {"leaf_index", "predict_leaf_index"},
    {"is_predict_contrib", "predict_contrib"},
    {"contrib", "predict_contrib"},
    {"predict_result", "output_result"},
    {"prediction_result", "output_result"},
    {"predict_name", "output_result"},
    {"prediction_name", "output_result"},
    {"pred_name", "output_result"},
    {"name_pred", "output_result"},
    {"convert_model_file", "convert_model"},
    {"num_classes", "num_class"},
    {"unbalance", "is_unbalance"},
    {"unbalanced_sets", "is_unbalance"},
    {"metrics", "metric"},
    {"metric_types", "metric"},
    {"output_freq", "metric_freq"},
    {"training_metric", "is_provide_training_metric"},
    {"is_training_metric", "is_provide_training_metric"},
    {"train_metric", "is_provide_training_metric"},
    {"ndcg_eval_at", "eval_at"},
    {"ndcg_at", "eval_at"},
    {"map_eval_at", "eval_at"},
    {"map_at", "eval_at"},
    {"num_machine", "num_machines"},
    {"local_port", "local_listen_port"},
    {"port", "local_listen_port"},
    {"machine_list_file", "machine_list_filename"},
    {"machine_list", "machine_list_filename"},
    {"mlist", "machine_list_filename"},
    {"workers", "machines"},
    {"nodes", "machines"},
      });
    return aliases;
  }

  const std::unordered_set<std::string>& Config::parameter_set() {
    static std::unordered_set<std::string> params({
    "config",
    "task",
    "objective",
    "boosting",
    "linear_tree",
    "data",
    "valid",
    "num_iterations",
    "learning_rate",
    "num_leaves",
    "tree_learner",
    "num_threads",
    "inner_thread_num",
    "device_type",
    "seed",
    "deterministic",
    "force_col_wise",
    "force_row_wise",
    "histogram_pool_size",
    "max_depth",
    "min_data_in_leaf",
    "min_sum_hessian_in_leaf",
    "bagging_fraction",
    "pos_bagging_fraction",
    "neg_bagging_fraction",
    "bagging_freq",
    "bagging_seed",
    "feature_fraction",
    "feature_fraction_bynode",
    "feature_fraction_seed",
    "extra_trees",
    "extra_seed",
    "early_stopping_round",
    "first_metric_only",
    "max_delta_step",
    "lambda_l1",
    "lambda_l2",
    "linear_lambda",
    "min_gain_to_split",
    "drop_rate",
    "max_drop",
    "skip_drop",
    "xgboost_dart_mode",
    "uniform_drop",
    "drop_seed",
    "top_rate",
    "other_rate",
    "min_data_per_group",
    "max_cat_threshold",
    "cat_l2",
    "cat_smooth",
    "max_cat_to_onehot",
    "top_k",
    "monotone_constraints",
    "monotone_constraints_method",
    "monotone_penalty",
    "feature_contri",
    "forcedsplits_filename",
    "refit_decay_rate",
    "cegb_tradeoff",
    "cegb_penalty_split",
    "cegb_penalty_feature_lazy",
    "cegb_penalty_feature_coupled",
    "path_smooth",
    "interaction_constraints",
    "verbosity",
    "input_model",
    "output_model",
    "saved_feature_importance_type",
    "snapshot_freq",
    "max_bin",
    "max_bin_by_feature",
    "min_data_in_bin",
    "bin_construct_sample_cnt",
    "data_random_seed",
    "is_enable_sparse",
    "enable_bundle",
    "use_missing",
    "zero_as_missing",
    "feature_pre_filter",
    "pre_partition",
    "two_round",
    "header",
    "label_column",
    "weight_column",
    "group_column",
    "ignore_column",
    "categorical_feature",
    "forcedbins_filename",
    "save_binary",
    "precise_float_parser",
    "start_iteration_predict",
    "num_iteration_predict",
    "predict_raw_score",
    "predict_leaf_index",
    "predict_contrib",
    "predict_disable_shape_check",
    "pred_early_stop",
    "pred_early_stop_freq",
    "pred_early_stop_margin",
    "output_result",
    "convert_model_language",
    "convert_model",
    "objective_seed",
    "num_class",
    "is_unbalance",
    "scale_pos_weight",
    "sigmoid",
    "boost_from_average",
    "reg_sqrt",
    "alpha",
    "fair_c",
    "poisson_max_delta_step",
    "tweedie_variance_power",
    "lambdarank_truncation_level",
    "lambdarank_norm",
    "label_gain",
    "metric",
    "metric_freq",
    "is_provide_training_metric",
    "eval_at",
    "multi_error_top_k",
    "auc_mu_weights",
    "num_machines",
    "local_listen_port",
    "time_out",
    "machine_list_filename",
    "machines",
    "gpu_platform_id",
    "gpu_device_id",
    "gpu_use_dp",
    "num_gpu",
      });
    return params;
  }

  void Config::GetMembersFromString(const std::unordered_map<std::string, std::string>& params) {
    std::string tmp_str = "";
    GetBool(params, "linear_tree", &linear_tree);

    GetString(params, "data", &data);

    if (GetString(params, "valid", &tmp_str)) {
      valid = Common::Split(tmp_str.c_str(), ',');
    }

    GetInt(params, "num_iterations", &num_iterations);
    CHECK_GE(num_iterations, 0);

    GetDouble(params, "learning_rate", &learning_rate);
    CHECK_GT(learning_rate, 0.0);

    GetInt(params, "num_leaves", &num_leaves);
    CHECK_GT(num_leaves, 1);
    CHECK_LE(num_leaves, 131072);

    GetInt(params, "num_threads", &num_threads);

    GetInt(params, "inner_thread_num", &inner_thread_num);

    GetBool(params, "deterministic", &deterministic);

    GetBool(params, "force_col_wise", &force_col_wise);

    GetBool(params, "force_row_wise", &force_row_wise);

    GetDouble(params, "histogram_pool_size", &histogram_pool_size);

    GetInt(params, "max_depth", &max_depth);

    GetInt(params, "min_data_in_leaf", &min_data_in_leaf);
    CHECK_GE(min_data_in_leaf, 0);

    GetDouble(params, "min_sum_hessian_in_leaf", &min_sum_hessian_in_leaf);
    CHECK_GE(min_sum_hessian_in_leaf, 0.0);

    GetDouble(params, "bagging_fraction", &bagging_fraction);
    CHECK_GT(bagging_fraction, 0.0);
    CHECK_LE(bagging_fraction, 1.0);

    GetDouble(params, "pos_bagging_fraction", &pos_bagging_fraction);
    CHECK_GT(pos_bagging_fraction, 0.0);
    CHECK_LE(pos_bagging_fraction, 1.0);

    GetDouble(params, "neg_bagging_fraction", &neg_bagging_fraction);
    CHECK_GT(neg_bagging_fraction, 0.0);
    CHECK_LE(neg_bagging_fraction, 1.0);

    GetInt(params, "bagging_freq", &bagging_freq);

    GetInt(params, "bagging_seed", &bagging_seed);

    GetDouble(params, "feature_fraction", &feature_fraction);
    CHECK_GT(feature_fraction, 0.0);
    CHECK_LE(feature_fraction, 1.0);

    GetDouble(params, "feature_fraction_bynode", &feature_fraction_bynode);
    CHECK_GT(feature_fraction_bynode, 0.0);
    CHECK_LE(feature_fraction_bynode, 1.0);

    GetInt(params, "feature_fraction_seed", &feature_fraction_seed);

    GetBool(params, "extra_trees", &extra_trees);

    GetInt(params, "extra_seed", &extra_seed);

    GetInt(params, "early_stopping_round", &early_stopping_round);

    GetBool(params, "first_metric_only", &first_metric_only);

    GetDouble(params, "max_delta_step", &max_delta_step);

    GetDouble(params, "lambda_l1", &lambda_l1);
    CHECK_GE(lambda_l1, 0.0);

    GetDouble(params, "lambda_l2", &lambda_l2);
    CHECK_GE(lambda_l2, 0.0);

    GetDouble(params, "linear_lambda", &linear_lambda);
    CHECK_GE(linear_lambda, 0.0);

    GetDouble(params, "min_gain_to_split", &min_gain_to_split);
    CHECK_GE(min_gain_to_split, 0.0);

    GetDouble(params, "drop_rate", &drop_rate);
    CHECK_GE(drop_rate, 0.0);
    CHECK_LE(drop_rate, 1.0);

    GetInt(params, "max_drop", &max_drop);

    GetDouble(params, "skip_drop", &skip_drop);
    CHECK_GE(skip_drop, 0.0);
    CHECK_LE(skip_drop, 1.0);

    GetBool(params, "xgboost_dart_mode", &xgboost_dart_mode);

    GetBool(params, "uniform_drop", &uniform_drop);

    GetInt(params, "drop_seed", &drop_seed);

    GetDouble(params, "top_rate", &top_rate);
    CHECK_GE(top_rate, 0.0);
    CHECK_LE(top_rate, 1.0);

    GetDouble(params, "other_rate", &other_rate);
    CHECK_GE(other_rate, 0.0);
    CHECK_LE(other_rate, 1.0);

    GetInt(params, "min_data_per_group", &min_data_per_group);
    CHECK_GT(min_data_per_group, 0);

    GetInt(params, "max_cat_threshold", &max_cat_threshold);
    CHECK_GT(max_cat_threshold, 0);

    GetDouble(params, "cat_l2", &cat_l2);
    CHECK_GE(cat_l2, 0.0);

    GetDouble(params, "cat_smooth", &cat_smooth);
    CHECK_GE(cat_smooth, 0.0);

    GetInt(params, "max_cat_to_onehot", &max_cat_to_onehot);
    CHECK_GT(max_cat_to_onehot, 0);

    GetInt(params, "top_k", &top_k);
    CHECK_GT(top_k, 0);

    if (GetString(params, "monotone_constraints", &tmp_str)) {
      monotone_constraints = Common::StringToArray<int8_t>(tmp_str, ',');
    }

    GetString(params, "monotone_constraints_method", &monotone_constraints_method);

    GetDouble(params, "monotone_penalty", &monotone_penalty);
    CHECK_GE(monotone_penalty, 0.0);

    if (GetString(params, "feature_contri", &tmp_str)) {
      feature_contri = Common::StringToArray<double>(tmp_str, ',');
    }

    GetString(params, "forcedsplits_filename", &forcedsplits_filename);

    GetDouble(params, "refit_decay_rate", &refit_decay_rate);
    CHECK_GE(refit_decay_rate, 0.0);
    CHECK_LE(refit_decay_rate, 1.0);

    GetDouble(params, "cegb_tradeoff", &cegb_tradeoff);
    CHECK_GE(cegb_tradeoff, 0.0);

    GetDouble(params, "cegb_penalty_split", &cegb_penalty_split);
    CHECK_GE(cegb_penalty_split, 0.0);

    if (GetString(params, "cegb_penalty_feature_lazy", &tmp_str)) {
      cegb_penalty_feature_lazy = Common::StringToArray<double>(tmp_str, ',');
    }

    if (GetString(params, "cegb_penalty_feature_coupled", &tmp_str)) {
      cegb_penalty_feature_coupled = Common::StringToArray<double>(tmp_str, ',');
    }

    GetDouble(params, "path_smooth", &path_smooth);
    CHECK_GE(path_smooth, 0.0);

    GetString(params, "interaction_constraints", &interaction_constraints);

    GetInt(params, "verbosity", &verbosity);

    GetString(params, "input_model", &input_model);

    GetString(params, "output_model", &output_model);

    GetInt(params, "saved_feature_importance_type", &saved_feature_importance_type);

    GetInt(params, "snapshot_freq", &snapshot_freq);

    GetInt(params, "max_bin", &max_bin);
    CHECK_GT(max_bin, 1);

    if (GetString(params, "max_bin_by_feature", &tmp_str)) {
      max_bin_by_feature = Common::StringToArray<int32_t>(tmp_str, ',');
    }

    GetInt(params, "min_data_in_bin", &min_data_in_bin);
    CHECK_GT(min_data_in_bin, 0);

    GetInt(params, "bin_construct_sample_cnt", &bin_construct_sample_cnt);
    CHECK_GT(bin_construct_sample_cnt, 0);

    GetInt(params, "data_random_seed", &data_random_seed);

    GetBool(params, "is_enable_sparse", &is_enable_sparse);

    GetBool(params, "enable_bundle", &enable_bundle);

    GetBool(params, "use_missing", &use_missing);

    GetBool(params, "zero_as_missing", &zero_as_missing);

    GetBool(params, "feature_pre_filter", &feature_pre_filter);

    GetBool(params, "pre_partition", &pre_partition);

    GetBool(params, "two_round", &two_round);

    GetBool(params, "header", &header);

    GetString(params, "label_column", &label_column);

    GetString(params, "weight_column", &weight_column);

    GetString(params, "group_column", &group_column);

    GetString(params, "ignore_column", &ignore_column);

    GetString(params, "categorical_feature", &categorical_feature);

    GetString(params, "forcedbins_filename", &forcedbins_filename);

    GetBool(params, "save_binary", &save_binary);

    GetBool(params, "precise_float_parser", &precise_float_parser);

    GetInt(params, "start_iteration_predict", &start_iteration_predict);

    GetInt(params, "num_iteration_predict", &num_iteration_predict);

    GetBool(params, "predict_raw_score", &predict_raw_score);

    GetBool(params, "predict_leaf_index", &predict_leaf_index);

    GetBool(params, "predict_contrib", &predict_contrib);

    GetBool(params, "predict_disable_shape_check", &predict_disable_shape_check);

    GetBool(params, "pred_early_stop", &pred_early_stop);

    GetInt(params, "pred_early_stop_freq", &pred_early_stop_freq);

    GetDouble(params, "pred_early_stop_margin", &pred_early_stop_margin);

    GetString(params, "output_result", &output_result);

    GetString(params, "convert_model_language", &convert_model_language);

    GetString(params, "convert_model", &convert_model);

    GetInt(params, "objective_seed", &objective_seed);

    GetInt(params, "num_class", &num_class);
    CHECK_GT(num_class, 0);

    GetBool(params, "is_unbalance", &is_unbalance);

    GetDouble(params, "scale_pos_weight", &scale_pos_weight);
    CHECK_GT(scale_pos_weight, 0.0);

    GetDouble(params, "sigmoid", &sigmoid);
    CHECK_GT(sigmoid, 0.0);

    GetBool(params, "boost_from_average", &boost_from_average);

    GetBool(params, "reg_sqrt", &reg_sqrt);

    GetDouble(params, "alpha", &alpha);
    CHECK_GT(alpha, 0.0);

    GetDouble(params, "fair_c", &fair_c);
    CHECK_GT(fair_c, 0.0);

    GetDouble(params, "poisson_max_delta_step", &poisson_max_delta_step);
    CHECK_GT(poisson_max_delta_step, 0.0);

    GetDouble(params, "tweedie_variance_power", &tweedie_variance_power);
    CHECK_GE(tweedie_variance_power, 1.0);
    CHECK_LT(tweedie_variance_power, 2.0);

    GetInt(params, "lambdarank_truncation_level", &lambdarank_truncation_level);
    CHECK_GT(lambdarank_truncation_level, 0);

    GetBool(params, "lambdarank_norm", &lambdarank_norm);

    if (GetString(params, "label_gain", &tmp_str)) {
      label_gain = Common::StringToArray<double>(tmp_str, ',');
    }

    GetInt(params, "metric_freq", &metric_freq);
    CHECK_GT(metric_freq, 0);

    GetBool(params, "is_provide_training_metric", &is_provide_training_metric);

    if (GetString(params, "eval_at", &tmp_str)) {
      eval_at = Common::StringToArray<int>(tmp_str, ',');
    }

    GetInt(params, "multi_error_top_k", &multi_error_top_k);
    CHECK_GT(multi_error_top_k, 0);

    if (GetString(params, "auc_mu_weights", &tmp_str)) {
      auc_mu_weights = Common::StringToArray<double>(tmp_str, ',');
    }

    GetInt(params, "num_machines", &num_machines);
    CHECK_GT(num_machines, 0);

    GetInt(params, "local_listen_port", &local_listen_port);
    CHECK_GT(local_listen_port, 0);

    GetInt(params, "time_out", &time_out);
    CHECK_GT(time_out, 0);

    GetString(params, "machine_list_filename", &machine_list_filename);

    GetString(params, "machines", &machines);

    GetInt(params, "gpu_platform_id", &gpu_platform_id);

    GetInt(params, "gpu_device_id", &gpu_device_id);

    GetBool(params, "gpu_use_dp", &gpu_use_dp);

    GetInt(params, "num_gpu", &num_gpu);
    CHECK_GT(num_gpu, 0);
  }

  std::string Config::SaveMembersToString() const {
    std::stringstream str_buf;
    str_buf << "[linear_tree: " << linear_tree << "]\n";
    str_buf << "[data: " << data << "]\n";
    str_buf << "[valid: " << Common::Join(valid, ",") << "]\n";
    str_buf << "[num_iterations: " << num_iterations << "]\n";
    str_buf << "[learning_rate: " << learning_rate << "]\n";
    str_buf << "[num_leaves: " << num_leaves << "]\n";
    str_buf << "[num_threads: " << num_threads << "]\n";
    str_buf << "[inner_thread_num: " << inner_thread_num << "]\n";
    str_buf << "[deterministic: " << deterministic << "]\n";
    str_buf << "[force_col_wise: " << force_col_wise << "]\n";
    str_buf << "[force_row_wise: " << force_row_wise << "]\n";
    str_buf << "[histogram_pool_size: " << histogram_pool_size << "]\n";
    str_buf << "[max_depth: " << max_depth << "]\n";
    str_buf << "[min_data_in_leaf: " << min_data_in_leaf << "]\n";
    str_buf << "[min_sum_hessian_in_leaf: " << min_sum_hessian_in_leaf << "]\n";
    str_buf << "[bagging_fraction: " << bagging_fraction << "]\n";
    str_buf << "[pos_bagging_fraction: " << pos_bagging_fraction << "]\n";
    str_buf << "[neg_bagging_fraction: " << neg_bagging_fraction << "]\n";
    str_buf << "[bagging_freq: " << bagging_freq << "]\n";
    str_buf << "[bagging_seed: " << bagging_seed << "]\n";
    str_buf << "[feature_fraction: " << feature_fraction << "]\n";
    str_buf << "[feature_fraction_bynode: " << feature_fraction_bynode << "]\n";
    str_buf << "[feature_fraction_seed: " << feature_fraction_seed << "]\n";
    str_buf << "[extra_trees: " << extra_trees << "]\n";
    str_buf << "[extra_seed: " << extra_seed << "]\n";
    str_buf << "[early_stopping_round: " << early_stopping_round << "]\n";
    str_buf << "[first_metric_only: " << first_metric_only << "]\n";
    str_buf << "[max_delta_step: " << max_delta_step << "]\n";
    str_buf << "[lambda_l1: " << lambda_l1 << "]\n";
    str_buf << "[lambda_l2: " << lambda_l2 << "]\n";
    str_buf << "[linear_lambda: " << linear_lambda << "]\n";
    str_buf << "[min_gain_to_split: " << min_gain_to_split << "]\n";
    str_buf << "[drop_rate: " << drop_rate << "]\n";
    str_buf << "[max_drop: " << max_drop << "]\n";
    str_buf << "[skip_drop: " << skip_drop << "]\n";
    str_buf << "[xgboost_dart_mode: " << xgboost_dart_mode << "]\n";
    str_buf << "[uniform_drop: " << uniform_drop << "]\n";
    str_buf << "[drop_seed: " << drop_seed << "]\n";
    str_buf << "[top_rate: " << top_rate << "]\n";
    str_buf << "[other_rate: " << other_rate << "]\n";
    str_buf << "[min_data_per_group: " << min_data_per_group << "]\n";
    str_buf << "[max_cat_threshold: " << max_cat_threshold << "]\n";
    str_buf << "[cat_l2: " << cat_l2 << "]\n";
    str_buf << "[cat_smooth: " << cat_smooth << "]\n";
    str_buf << "[max_cat_to_onehot: " << max_cat_to_onehot << "]\n";
    str_buf << "[top_k: " << top_k << "]\n";
    str_buf << "[monotone_constraints: " << Common::Join(Common::ArrayCast<int8_t, int>(monotone_constraints), ",") << "]\n";
    str_buf << "[monotone_constraints_method: " << monotone_constraints_method << "]\n";
    str_buf << "[monotone_penalty: " << monotone_penalty << "]\n";
    str_buf << "[feature_contri: " << Common::Join(feature_contri, ",") << "]\n";
    str_buf << "[forcedsplits_filename: " << forcedsplits_filename << "]\n";
    str_buf << "[refit_decay_rate: " << refit_decay_rate << "]\n";
    str_buf << "[cegb_tradeoff: " << cegb_tradeoff << "]\n";
    str_buf << "[cegb_penalty_split: " << cegb_penalty_split << "]\n";
    str_buf << "[cegb_penalty_feature_lazy: " << Common::Join(cegb_penalty_feature_lazy, ",") << "]\n";
    str_buf << "[cegb_penalty_feature_coupled: " << Common::Join(cegb_penalty_feature_coupled, ",") << "]\n";
    str_buf << "[path_smooth: " << path_smooth << "]\n";
    str_buf << "[interaction_constraints: " << interaction_constraints << "]\n";
    str_buf << "[verbosity: " << verbosity << "]\n";
    str_buf << "[saved_feature_importance_type: " << saved_feature_importance_type << "]\n";
    str_buf << "[max_bin: " << max_bin << "]\n";
    str_buf << "[max_bin_by_feature: " << Common::Join(max_bin_by_feature, ",") << "]\n";
    str_buf << "[min_data_in_bin: " << min_data_in_bin << "]\n";
    str_buf << "[bin_construct_sample_cnt: " << bin_construct_sample_cnt << "]\n";
    str_buf << "[data_random_seed: " << data_random_seed << "]\n";
    str_buf << "[is_enable_sparse: " << is_enable_sparse << "]\n";
    str_buf << "[enable_bundle: " << enable_bundle << "]\n";
    str_buf << "[use_missing: " << use_missing << "]\n";
    str_buf << "[zero_as_missing: " << zero_as_missing << "]\n";
    str_buf << "[feature_pre_filter: " << feature_pre_filter << "]\n";
    str_buf << "[pre_partition: " << pre_partition << "]\n";
    str_buf << "[two_round: " << two_round << "]\n";
    str_buf << "[header: " << header << "]\n";
    str_buf << "[label_column: " << label_column << "]\n";
    str_buf << "[weight_column: " << weight_column << "]\n";
    str_buf << "[group_column: " << group_column << "]\n";
    str_buf << "[ignore_column: " << ignore_column << "]\n";
    str_buf << "[categorical_feature: " << categorical_feature << "]\n";
    str_buf << "[forcedbins_filename: " << forcedbins_filename << "]\n";
    str_buf << "[precise_float_parser: " << precise_float_parser << "]\n";
    str_buf << "[objective_seed: " << objective_seed << "]\n";
    str_buf << "[num_class: " << num_class << "]\n";
    str_buf << "[is_unbalance: " << is_unbalance << "]\n";
    str_buf << "[scale_pos_weight: " << scale_pos_weight << "]\n";
    str_buf << "[sigmoid: " << sigmoid << "]\n";
    str_buf << "[boost_from_average: " << boost_from_average << "]\n";
    str_buf << "[reg_sqrt: " << reg_sqrt << "]\n";
    str_buf << "[alpha: " << alpha << "]\n";
    str_buf << "[fair_c: " << fair_c << "]\n";
    str_buf << "[poisson_max_delta_step: " << poisson_max_delta_step << "]\n";
    str_buf << "[tweedie_variance_power: " << tweedie_variance_power << "]\n";
    str_buf << "[lambdarank_truncation_level: " << lambdarank_truncation_level << "]\n";
    str_buf << "[lambdarank_norm: " << lambdarank_norm << "]\n";
    str_buf << "[label_gain: " << Common::Join(label_gain, ",") << "]\n";
    str_buf << "[eval_at: " << Common::Join(eval_at, ",") << "]\n";
    str_buf << "[multi_error_top_k: " << multi_error_top_k << "]\n";
    str_buf << "[auc_mu_weights: " << Common::Join(auc_mu_weights, ",") << "]\n";
    str_buf << "[num_machines: " << num_machines << "]\n";
    str_buf << "[local_listen_port: " << local_listen_port << "]\n";
    str_buf << "[time_out: " << time_out << "]\n";
    str_buf << "[machine_list_filename: " << machine_list_filename << "]\n";
    str_buf << "[machines: " << machines << "]\n";
    str_buf << "[gpu_platform_id: " << gpu_platform_id << "]\n";
    str_buf << "[gpu_device_id: " << gpu_device_id << "]\n";
    str_buf << "[gpu_use_dp: " << gpu_use_dp << "]\n";
    str_buf << "[num_gpu: " << num_gpu << "]\n";
    return str_buf.str();
  }

}  // namespace LightGBM
