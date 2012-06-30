/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.4
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "gmetric"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "gmetric"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * conf_arg;	/**< @brief The configuration file to use for finding send channels (default='@sysconfdir@/gmond.conf').  */
  char * conf_orig;	/**< @brief The configuration file to use for finding send channels original value given at command line.  */
  const char *conf_help; /**< @brief The configuration file to use for finding send channels help description.  */
  char * name_arg;	/**< @brief Name of the metric.  */
  char * name_orig;	/**< @brief Name of the metric original value given at command line.  */
  const char *name_help; /**< @brief Name of the metric help description.  */
  char * value_arg;	/**< @brief Value of the metric.  */
  char * value_orig;	/**< @brief Value of the metric original value given at command line.  */
  const char *value_help; /**< @brief Value of the metric help description.  */
  char * type_arg;	/**< @brief Either string|int8|uint8|int16|uint16|int32|uint32|float|double.  */
  char * type_orig;	/**< @brief Either string|int8|uint8|int16|uint16|int32|uint32|float|double original value given at command line.  */
  const char *type_help; /**< @brief Either string|int8|uint8|int16|uint16|int32|uint32|float|double help description.  */
  char * units_arg;	/**< @brief Unit of measure for the value e.g. Kilobytes, Celcius (default='').  */
  char * units_orig;	/**< @brief Unit of measure for the value e.g. Kilobytes, Celcius original value given at command line.  */
  const char *units_help; /**< @brief Unit of measure for the value e.g. Kilobytes, Celcius help description.  */
  char * slope_arg;	/**< @brief Either zero|positive|negative|both|derivative (default='both').  */
  char * slope_orig;	/**< @brief Either zero|positive|negative|both|derivative original value given at command line.  */
  const char *slope_help; /**< @brief Either zero|positive|negative|both|derivative help description.  */
  int tmax_arg;	/**< @brief The maximum time in seconds between gmetric calls (default='60').  */
  char * tmax_orig;	/**< @brief The maximum time in seconds between gmetric calls original value given at command line.  */
  const char *tmax_help; /**< @brief The maximum time in seconds between gmetric calls help description.  */
  int dmax_arg;	/**< @brief The lifetime in seconds of this metric (default='0').  */
  char * dmax_orig;	/**< @brief The lifetime in seconds of this metric original value given at command line.  */
  const char *dmax_help; /**< @brief The lifetime in seconds of this metric help description.  */
  char * group_arg;	/**< @brief Group of the metric.  */
  char * group_orig;	/**< @brief Group of the metric original value given at command line.  */
  const char *group_help; /**< @brief Group of the metric help description.  */
  char * cluster_arg;	/**< @brief Cluster of the metric.  */
  char * cluster_orig;	/**< @brief Cluster of the metric original value given at command line.  */
  const char *cluster_help; /**< @brief Cluster of the metric help description.  */
  char * desc_arg;	/**< @brief Description of the metric.  */
  char * desc_orig;	/**< @brief Description of the metric original value given at command line.  */
  const char *desc_help; /**< @brief Description of the metric help description.  */
  char * title_arg;	/**< @brief Title of the metric.  */
  char * title_orig;	/**< @brief Title of the metric original value given at command line.  */
  const char *title_help; /**< @brief Title of the metric help description.  */
  char * spoof_arg;	/**< @brief IP address and name of host/device (colon separated) we are spoofing (default='').  */
  char * spoof_orig;	/**< @brief IP address and name of host/device (colon separated) we are spoofing original value given at command line.  */
  const char *spoof_help; /**< @brief IP address and name of host/device (colon separated) we are spoofing help description.  */
  const char *heartbeat_help; /**< @brief spoof a heartbeat message (use with spoof option) help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int conf_given ;	/**< @brief Whether conf was given.  */
  unsigned int name_given ;	/**< @brief Whether name was given.  */
  unsigned int value_given ;	/**< @brief Whether value was given.  */
  unsigned int type_given ;	/**< @brief Whether type was given.  */
  unsigned int units_given ;	/**< @brief Whether units was given.  */
  unsigned int slope_given ;	/**< @brief Whether slope was given.  */
  unsigned int tmax_given ;	/**< @brief Whether tmax was given.  */
  unsigned int dmax_given ;	/**< @brief Whether dmax was given.  */
  unsigned int group_given ;	/**< @brief Whether group was given.  */
  unsigned int cluster_given ;	/**< @brief Whether cluster was given.  */
  unsigned int desc_given ;	/**< @brief Whether desc was given.  */
  unsigned int title_given ;	/**< @brief Whether title was given.  */
  unsigned int spoof_given ;	/**< @brief Whether spoof was given.  */
  unsigned int heartbeat_given ;	/**< @brief Whether heartbeat was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
