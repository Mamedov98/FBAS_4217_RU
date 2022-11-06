using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Translater.Services.Interfaces
{
    internal interface IApiService
    {
        public Task<string?>? GetLangsAsync();
        public Task<string?>? GetTranslateAsync(string? textToTranslate, string? target, string? source);

    }
}
