#ifndef __WTCTRL_H
#define __WTCTRL_H

#define WTCTRL_WID_NAME		"wid"
#define WTCTRL_CMD_NAME		"cmd"
#define WTCTRL_ATTR_NAME	"attr"
#define WTCTRL_EVENT_NAME	"event"

#define WTCTRL_CMD_SET	"set"
#define WTCTRL_CMD_GET	"get"

enum {
    WTCTRL_CODE_OK = 0,
    WTCTRL_CODE_PARAM_ERROR,
    WTCTRL_CODE_WID_NOT_FOUND,
    WTCTRL_CODE_FAIL
};

char *wtctrl_json_parse(const char *json_str);

#endif //__WTCTRL_H
