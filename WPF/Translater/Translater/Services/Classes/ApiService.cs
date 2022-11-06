using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Net.Http;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media.Animation;
using Translater.Model.Lang;
using Translater.Services.Interfaces;

namespace Translater.Services.Classes
{
    public class ApiService : IApiService
    {
        private static readonly string? key = @"trnsl.1.1.20180618T100311Z.005e5b09624d4005.8a4c4a949a7baecffad81e1c4420e977cf8556f4";
        private static readonly string? url = @"https://translate.yandex.net/api/v1.5/tr.json/translate";
        private static HttpClient? client;

        public ApiService()
        {
            client = new HttpClient();

            client?.DefaultRequestHeaders.Add("X-RapidAPI-Key", "1ffacf9737mshbb4164b9741187ep1ed703jsn0ece4656d4c4");
            client?.DefaultRequestHeaders.Add("X-RapidAPI-Host", "google-translate1.p.rapidapi.com");
        }
        public static async Task<string?>? GetLangsAsync()
        {
            try
            {
                var res = await client?.GetStringAsync(@"https://google-translate1.p.rapidapi.com/language/translate/v2/languages");
                return res;
            }
            catch (Exception?)
            {
                throw;
            }
        }

        public static async Task<string?>? GetTranslateAsync(string? textToTranslate, string? target, string? source)
        {
            try
            {
                var request = new HttpRequestMessage()
                {
                    Content = new FormUrlEncodedContent(new Dictionary<string, string?>
                    {
                        { "q", textToTranslate },
                        { "target", target },
                        { "source", source },
                    }),
                    RequestUri = new Uri(@"https://google-translate1.p.rapidapi.com/language/translate/v2")
                };

                var res = await client?.SendAsync(request);
                return res.RequestMessage?.Content?.ToString();
            }
            catch (Exception?)
            {
                throw;
            }
        }

    }
}
