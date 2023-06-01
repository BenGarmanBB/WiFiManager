/**
 * SAMPLE SAMPLE SAMPLE
 * 
 * wm_strings_es.h
 * spanish strings for
 * WiFiManager, a library for the ESPX/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


/**
 * ADD TO BUILD FLAGS
 * -DWM_STRINGS_FILE="\"wm_strings_es.h\""
 */

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
// Copy and change to custom locale tokens if necessary, but strings should be good enough
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "es-ES"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'><img style=\"width:100%\" onclick=\"location = '/'\" src=\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAY0AAACmCAYAAAAmu9OQAAAACXBIWXMAAA7DAAAOwwHHb6hkAAA1LklEQVR4Xu19B7hVxdX2vTT5QgSssQaImliSqDEmmsSGJaYgJSgqqAiiIqig2KJSDCoKgiAaUBFEPrErxopR7GgSS0QgKijY/t/8nxHF5Jdy7/3Wu5k5zt1n9p7Z7dzCe57nPLfs2TNr3plZa2a1qarihwgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQASIABEgAkSACBABIkAEiAARIAJEgAgQASJABIgAESACRIAIEAEiQAS8EKj2KpVDoeUrV4bb0n9H0VCnmq0YjR7d9KVF044qzd91E7716PJ1O3XqVOtBH4sQASJABJouAhAU0268sefJAwdOkl6A6eELJpr2q+vIWk/S9s120/yetL165X+6337PTZg48WTBs0XTnQ2knAgQASLggYAwvAUZhEQmZtvc2v3rq69u4wE5ixABIkAECkOg0J3r62++2eHll146qDDqN7KKH3n44d4bWZfZXSJABBoZAoUKjZr161s3sv42aXI++eSTbZt0B0g8ESACTR6BQoVGdYsWvsZbm7G4yYObdwfWrV27Sd51sj4iQASIQBIEWiUpnLRsCz+hUXfWsGFjVd3wKtJfbc/AIy1U8hAuSTyXkpQ16dRQ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\">"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configurar WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configurar WiFi (sin escanear)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Información</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Configuración</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Cerca</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Reanudar</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Salida</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Borrar</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Actualizer</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Contraseña</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' onclick='f()'> Mostrar contraseña";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refresh</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Saving Credentials<br/>Trying to connect ESP to network.<br />If it fails reconnect to AP to try again</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Saved<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Erase WiFi Config</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Actualizer</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Atrás</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Conectado</strong> a {v}<br/><em><small>con IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>No conectado</strong> a {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Authentication Failure"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>No Encontrado";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>No se pudo conectar"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Sin AP establecido</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available Pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload New Firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, Open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update Failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update Successful.  </strong> <br/> Device Rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access Point Hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>Hall</dt><dd>{3}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access Point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build Date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_subBrand[]           PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifisettings[]  PROGMEM = "Settings Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
